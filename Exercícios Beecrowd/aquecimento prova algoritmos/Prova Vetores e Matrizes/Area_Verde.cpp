#include <iostream>
#include <iomanip>
#define TAM 10
/**c) some a área inferior (triângulo verde, abaixo da diagonal principal)
*/
using namespace std;
int main() {
   int M[TAM][TAM];
   for (int i=0; i<TAM; i++) {
      for (int j=0; j<TAM; j++) {
         cin >> M[i][j];
      }
   }
   /* Soma da área triangular verde (j < i) */
   int soma = 0;
   for (int i=0; i<TAM; i++) {       //linha
      for (int j=0; j<i; j++) {      //coluna: só as que ficam abaixo da diagonal
         soma = soma + M[i][j];
      }
   }
   cout << "SOMA = " << soma << endl;
   for (int i=0; i<TAM; i++) { //linha
      for (int j=0; j<TAM; j++) { //coluna
         cout << setw(3) << M[i][j] << " ";
      }
      cout << endl;
   }
}