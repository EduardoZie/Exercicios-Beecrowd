/** Numero perfeito. Exemplo:
   6 = 1 + 2 + 3 (igual à soma dos seus divisores
**/

#include <iostream>

using namespace std;

int main() {
   int NC,soma;
   int N;
   cin >> NC;
   while (NC--) {
      cin >> N; ///6
      soma = 0;
      for (int i=1; i<=N/2+1; i++) { ///1,2,3,4,5
         cout << "Testando..." << N << " " << i << endl;
         if (N%i==0) { /// N%1 N%2 N%3...
            cout << "somando..." << "Soma = " << soma <<  "+" << i << endl;
            soma = soma + i;
         }
      }
      if (soma==N) {
         cout << N << " eh perfeito" << endl;
      } else {
         cout << N << " nao eh perfeito" << endl;
      }
   }

}

