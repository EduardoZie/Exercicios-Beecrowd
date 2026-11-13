#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   /// ALGORITMO GULOSO
   /// VALOR =576.73
   /// DEFINIÇÃO DE VARIAVEIS
   double valor;
   int reais, centavos, N100, N50, N20, N10, N5, N2, M1, M050, M025, M010, M05, M01;
   ///ENTRADA
   cin >> valor;
   ///PROCESSAMENTO 1 DE NOTAS
   reais = valor;
   centavos = ((valor-reais)+0.001) *100;

   N100 = reais/100;
   reais = reais % 100;

   N50 = reais/50;
   reais = reais % 50;

   N20 = reais/20;
   reais = reais % 20;

   N10 = reais/10;
   reais = reais % 10;

   N5 = reais/5;
   reais = reais % 5;

   N2 = reais/2;
   reais = reais % 2;

   ///PROCESSAMENTO 2 DE MOEDAS

   M1 = reais/1;
   reais = reais % 1;

   M050 = centavos/ 50;
   centavos = centavos % 50;

   M025 = centavos/ 25;
   centavos = centavos % 25;

   M010 = centavos/ 10;
   centavos = centavos % 10;

   M05 = centavos/ 5;
   centavos = centavos % 5;

   M01 = centavos/ 1;
   centavos = centavos % 1;

///SAIDA
///NOTAS
   cout << "NOTAS:" << endl;
   cout << N100 << " nota(s) de R$ 100.00" << endl;
   cout << N50 << " nota(s) de R$ 50.00" << endl;
   cout << N20 << " nota(s) de R$ 20.00" << endl;
   cout << N10 << " nota(s) de R$ 10.00" << endl;
   cout << N5 << " nota(s) de R$ 5.00" << endl;
   cout << N2 << " nota(s) de R$ 2.00" << endl;

///MOEDAS
   cout << "MOEDAS:" << endl;
   cout << M1 << " moeda(s) de R$ 1.00" << endl;
   cout << M050 << " moeda(s) de R$ 0.50" << endl;
   cout << M025 << " moeda(s) de R$ 0.25" << endl;
   cout << M010 << " moeda(s) de R$ 0.10" << endl;
   cout << M05 << " moeda(s) de R$ 0.05" << endl;
   cout << M01 << " moeda(s) de R$ 0.01" << endl;

return 0;
}
