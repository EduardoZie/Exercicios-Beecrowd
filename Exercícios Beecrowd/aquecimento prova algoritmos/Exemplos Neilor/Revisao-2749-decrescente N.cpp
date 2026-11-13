/**
   Decrescente N
**/
#include <iostream>

using namespace std;

int main() {
   int valor = 100;
   int N[30];
   for (int i=0; i<=29; i++ ){
       valor = valor - i; ///i = 0,1,2,3,4  100-0 100-1 100-2 100-3
       N[i]=valor;
       cout <<  "N["<<i<<"]="<<valor << endl;

   }
}

