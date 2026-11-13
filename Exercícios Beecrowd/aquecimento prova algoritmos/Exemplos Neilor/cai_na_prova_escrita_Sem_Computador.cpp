/**
Apresente a saída do código abaixo
**/
#include <iostream>

using namespace std;

int main() {

   for (int i=1; i < 9; i=i+2) {
       for (double j = 6; j-i > 1; j=j-2) {
            cout << i << " " << j << endl;
       }
   }

}
