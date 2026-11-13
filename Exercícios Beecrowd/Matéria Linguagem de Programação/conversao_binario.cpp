#include <iostream>

using namespace std;

string binario(int n) {
   string saida="";
   int i;
   for (i=1; i<n; i=i*2);
   int x= i/2;
   cout << x << endl;
   /// fazer o calculo aqui, somando na string saida
   return saida; ///acumular aqui os uns e zeros 101001101...
}

int main() {
   int n;
   while( cin >> n ) {
       cout << binario(n) << endl;
   }
}
