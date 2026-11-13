#define LED_VERDE 2
#define LED_VERMELHO 3
#define LED_AMARELO 4
#define LED_AZUL 5

#define BOTAO_VERDE 8
#define BOTAO_VERMELHO 9
#define BOTAO_AMARELO 10
#define BOTAO_AZUL 11

#define PRONTO_PARA_PROXIMA_RODADA 1
#define USUARIO_RESPONDENDO 2
#define JOGO_FINALIZADO_SUCESSO 3
#define JOGO_FINALIZADO_FALHA 4

#define UM_SEGUNDO 800
#define MEIO_SEGUNDO 400

#define TAM_SEQ 2
#define INDEFINIDO -1

#define BUZZER 13

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20,16,2);

int sequenciaLuzes[TAM_SEQ];
int rodada = 0;
int leds_respondidos = 0;

void setup() {
    Serial.begin(9600);
    iniciaPortas();
    iniciaJogo();
    ligaLCD();
}

void loop() {
    switch(estadoAtual()) { ///Busca o estado atual (linha 51)
    case PRONTO_PARA_PROXIMA_RODADA:
        escreveLCD(1,"Prox. Rodada ");
        preparaNovaRodada();
        break;
    case USUARIO_RESPONDENDO:
       // escreveLCD(0,"User responde");
        processaRespostaUsuario();
        break;
    case JOGO_FINALIZADO_SUCESSO:
        escreveLCD(0,"Sucesso!  ");
        jogoFinalizadoSucesso();
        break;
    case JOGO_FINALIZADO_FALHA:
        escreveLCD(0,"Falha!    ");
        jogoFinalizadoFalha();
        break;
    }
    delay(MEIO_SEGUNDO);
}

int estadoAtual() {
    if (rodada <= TAM_SEQ) {
        if (leds_respondidos == rodada) {
            return PRONTO_PARA_PROXIMA_RODADA;
        } else {
            return USUARIO_RESPONDENDO;
        }
     } else if (rodada == TAM_SEQ + 1) {
          return JOGO_FINALIZADO_SUCESSO;
     } else {
          return JOGO_FINALIZADO_FALHA;
     }
}

void iniciaJogo() {
    int jogo = analogRead(0);
    randomSeed(jogo);

    for (int i=0; i<TAM_SEQ; i=i+1) {
        sequenciaLuzes[i] = sorteiaCor();
    }
}

int sorteiaCor(void) {
    return random(LED_VERDE, LED_AZUL + 1);
}

void iniciaPortas() {
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
    pinMode(LED_AZUL, OUTPUT);
    pinMode(BOTAO_VERDE, INPUT_PULLUP);
    pinMode(BOTAO_AMARELO, INPUT_PULLUP);
    pinMode(BOTAO_VERMELHO, INPUT_PULLUP);
    pinMode(BOTAO_AZUL, INPUT_PULLUP);
}

int piscaLed(int portaLED) {
   verificaSomDoLed(portaLED);
   digitalWrite(portaLED, HIGH);
   delay(MEIO_SEGUNDO);
   digitalWrite(portaLED, LOW);
   delay(MEIO_SEGUNDO);
   return portaLED;
}

int checaRespostaJogador() {
    if(digitalRead(BOTAO_VERDE) == LOW) {
        return LED_VERDE;
    }
    if(digitalRead(BOTAO_AMARELO) == LOW) {
        return LED_AMARELO;
    }
    if(digitalRead(BOTAO_VERMELHO) == LOW) {
        return LED_VERMELHO;
    }
    if(digitalRead(BOTAO_AZUL) == LOW) {
        return LED_AZUL;
    }
    return INDEFINIDO;
}

void tocaLedsRodada() {
    for(int i = 0; i< rodada; i=i+1) {
        piscaLed(sequenciaLuzes[i]);
    }
}

void preparaNovaRodada() {
    rodada++;
    leds_respondidos = 0;
    escreveLCD(0,"Responda LED: ");
    if (rodada <= TAM_SEQ) {
      tocaLedsRodada();
    }
}

void processaRespostaUsuario() {
    int resposta = checaRespostaJogador();

    if (resposta == INDEFINIDO) {
        return;
    }
    if (resposta == sequenciaLuzes[leds_respondidos]) {
      leds_respondidos++;
      escreveNumLCD(1,leds_respondidos);
      piscaLed(resposta);
      delay(MEIO_SEGUNDO);
    } else {
      escreveLCD(0,"Resp. Errada!");
      rodada = TAM_SEQ + 2;
   }
}

void escreveLCD(int linha,char texto[12]) {
  lcd.clear();
  lcd.setCursor(0,linha);   //Set cursor to character 2 on line 0
  lcd.print(texto);
}
void escreveNumLCD(int linha,int numero) {
  lcd.setCursor(0,linha);   //Set cursor to character 2 on line 0
  lcd.print(numero);
}

void ligaLCD() {
  lcd.init();
  lcd.clear();
  lcd.backlight();  // Ligando backlight

  //lcd.cursor(column,row) index starts at 0
  lcd.setCursor(2,0);   //Set cursor to character 2 on line 0
  lcd.print("Jogo Genius!");

  lcd.setCursor(3,1);   //Move cursor to character 2 on line 1
  lcd.print("Iniciando");
  delay(UM_SEGUNDO);
}


void tocaSom(int frequencia) {
   tone(BUZZER, frequencia, 100);
}


void jogoFinalizadoSucesso() {
   piscaLed(LED_VERDE);
   piscaLed(LED_AMARELO);
   piscaLed(LED_VERMELHO);
   piscaLed(LED_AZUL);
   delay (MEIO_SEGUNDO);
}


void jogoFinalizadoFalha() {
   piscaLed(LED_VERDE);
   piscaLed(LED_AMARELO);
   piscaLed(LED_VERMELHO);
   piscaLed(LED_AZUL);
   delay (UM_SEGUNDO);
   piscaLed(LED_VERDE);
   piscaLed(LED_AMARELO);
   piscaLed(LED_VERMELHO);
   piscaLed(LED_AZUL);
   delay (MEIO_SEGUNDO);
}


void verificaSomDoLed(int PortaLed) {
   switch (PortaLed) {
   case LED_VERDE:
      tocaSom(200);
      break;
   case LED_AMARELO:
      tocaSom(240);
      break;
   case LED_VERMELHO:
      tocaSom(280);
      break;
   case LED_AZUL:
      tocaSom(320);
      break;
   }
}
