// ============================================================
// IRRIGADOR AUTOM�TICO VIA WiFi COM ESP32
// Projeto Integrador - VERS�O FINAL
// ============================================================
// Comportamento do bot�o no app Blynk (V3):
//   ON  = MODO MANUAL: bomba liga e fica ligada (puxa �gua direto)
//   OFF = MODO AUTOM�TICO: bomba obedece o sensor de umidade
//
// IMPORTANTE: Este c�digo usa REL� COM L�GICA INVERTIDA
//   HIGH = rel� ativado (bomba ligada)
//   LOW  = rel� desativado (bomba desligada)
// ============================================================

// --- Credenciais Blynk ---
#define BLYNK_TEMPLATE_ID "TMPL2ZwRkh7Nk"
#define BLYNK_TEMPLATE_NAME "Irrigador Automatico"
#define BLYNK_AUTH_TOKEN "Pia5RB4xnTvvI2Zty9yEKeF_g-tmIbK0"

#define BLYNK_PRINT Serial

// --- Bibliotecas ---
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// --- Credenciais WiFi ---
char ssid[] = "POCOX7Pro";
char pass[] = "12345678";

// --- Pinos ---
#define SENSOR_PIN 34    // D34 - sensor higr�metro (ADC1)
#define RELAY_PIN  26    // D26 - m�dulo rel�

// --- LCD I2C ---
LiquidCrystal_I2C lcd(0x3F, 16, 2);

// --- Timer ---
BlynkTimer timer;

// --- Vari�veis ---
int umidadeSolo = 0;
int umidadePercentual = 0;
bool bombaLigada = false;
bool modoManual = false;

// Limites de umidade para o modo autom�tico
const int LIMITE_SECO  = 40;  // Abaixo disso = liga bomba
const int LIMITE_UMIDO = 45;  // Acima disso = desliga bomba

// ============================================================
// SETUP
// ============================================================
void setup() {
  Serial.begin(115200);
  Serial.println("Irrigador Automatico - ESP32");

  // Configura rel� como sa�da e DESLIGA a bomba
  // L�GICA INVERTIDA: LOW = desligado
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  pinMode(SENSOR_PIN, INPUT);

  // Inicializa LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Irrigador Auto");
  lcd.setCursor(0, 1);
  lcd.print("Conectando WiFi");

  // Conecta ao Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "ny3.blynk.cloud", 80);

  delay(2000);

  // Timer: l� sensor a cada 2 segundos
  timer.setInterval(2000L, lerSensorEControlar);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WiFi Conectado!");
  lcd.setCursor(0, 1);
  lcd.print("Sistema OK");
  delay(2000);

  Serial.println("Sistema iniciado!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

// ============================================================
// LOOP
// ============================================================
void loop() {
  Blynk.run();
  timer.run();
}

// ============================================================
// Ler sensor e controlar bomba (MODO AUTOM�TICO)
// ============================================================
void lerSensorEControlar() {
  // L� sensor (0-4095)
  umidadeSolo = analogRead(SENSOR_PIN);

  // Converte para % (invertido: 4095=seco, 0=molhado)
  umidadePercentual = map(umidadeSolo, 4095, 0, 0, 100);
  umidadePercentual = constrain(umidadePercentual, 0, 100);

  // Controle automatico - so atua se NAO estiver em modo manual
  if (!modoManual) {
    if (umidadePercentual < LIMITE_SECO) {
      ligarBomba();
    } else if (umidadePercentual > LIMITE_UMIDO) {
      desligarBomba();
    }
  }

  atualizarLCD();
  enviarDadosBlynk();

  // Debug serial
  Serial.print("Sensor: ");
  Serial.print(umidadeSolo);
  Serial.print(" | Umidade: ");
  Serial.print(umidadePercentual);
  Serial.print("% | Bomba: ");
  Serial.print(bombaLigada ? "ON" : "OFF");
  Serial.print(" | Modo: ");
  Serial.println(modoManual ? "MANUAL" : "AUTO");
}

// ============================================================
// Ligar bomba (L�GICA INVERTIDA: HIGH = liga)
// ============================================================
void ligarBomba() {
  if (!bombaLigada) {
    digitalWrite(RELAY_PIN, HIGH); // HIGH = rel� ativa
    bombaLigada = true;
    Serial.println(">>> BOMBA LIGADA");
  }
}

// ============================================================
// Desligar bomba (L�GICA INVERTIDA: LOW = desliga)
// ============================================================
void desligarBomba() {
  if (bombaLigada) {
    digitalWrite(RELAY_PIN, LOW); // LOW = rel� desativa
    bombaLigada = false;
    Serial.println(">>> BOMBA DESLIGADA");
  }
}

// ============================================================
// Atualizar LCD
// ============================================================
void atualizarLCD() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Umidade: ");
  lcd.print(umidadePercentual);
  lcd.print("%");

  lcd.setCursor(0, 1);
  if (modoManual) {
    lcd.print("M:");
  } else {
    lcd.print("A:");
  }
  lcd.print(bombaLigada ? "LIGADA" : "DESLIG.");
}

// ============================================================
// Enviar dados para Blynk
// ============================================================
void enviarDadosBlynk() {
  Blynk.virtualWrite(V0, umidadePercentual);  // Gauge de umidade
  Blynk.virtualWrite(V1, bombaLigada ? 1 : 0); // Estado da bomba
  Blynk.virtualWrite(V2, umidadeSolo);          // Valor bruto
}

// ============================================================
// Ao conectar no Blynk, garante inicio em modo AUTOMATICO
// e sincroniza o botao do app para OFF
// (evita que a bomba seja desligada ao conectar)
// ============================================================
BLYNK_CONNECTED() {
  modoManual = false;
  Blynk.virtualWrite(V3, 0);  // Botao do app comeca em OFF (automatico)
  Serial.println(">>> Conectado ao Blynk - Modo AUTOMATICO");
}

// ============================================================
// Controle do bot�o V3 no app Blynk
// ON  (V3=1) = MODO MANUAL: liga bomba e ignora o sensor
// OFF (V3=0) = MODO AUTOMATICO: bomba obedece o sensor de umidade
// ============================================================
BLYNK_WRITE(V3) {
  int valor = param.asInt();
  if (valor == 1) {
    // ON = MODO MANUAL: bomba forcada a ligar
    modoManual = true;
    ligarBomba();
    Serial.println(">>> MODO MANUAL: Bomba ligada (puxa agua direto)");
  } else {
    // OFF = MODO AUTOMATICO: volta a obedecer o sensor
    modoManual = false;
    Serial.println(">>> MODO AUTOMATICO: Bomba obedece a umidade");
    lerSensorEControlar();  // chama o automatico imediatamente
  }
}
