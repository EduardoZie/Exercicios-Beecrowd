/** 1000 primos após o 100
  inicio = 100 (primeiro valor para testar)
**/
#include <iostream>

using namespace std;

int main() {
   int QUANTIA = 10000;
   int n=100;
//  cin >> n;
   int cont = 0;

   while (cont < QUANTIA) {

      int div = 0;
      for (int i=1; i<=n; i = i + 1) {
         if (n % i==0) {
            div = div+ 1;
         }
      }

      if (div==2) {
         cont = cont + 1;
         if (cont < QUANTIA) cout << n << " ";
         else cout << n << endl;
      }
      n =n + 1;
   }

}

