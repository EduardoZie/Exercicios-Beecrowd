/** Fatorial
   6! = 6*5*4*3*2*1
   7! = 7*6*5...*1
**/

#include <iostream>

using namespace std;

int main() {
   int N;
   int fat = 1;

   cin >> N; ///6: 6*5*4*3*2*1
   for (int i = 1; i <=N; i=i+1) {
        fat = fat * i; /// fat = 0 * 1;
        cout << i << " FATORIAL: " << fat << endl;
   }

   /// outro jeito
   fat = 1;
   for (int i = N; i >=1 ; i=i-1) {
        fat = fat * i; /// fat = 0 * 1;
        cout << i << " FATORIAL: " << fat << endl;
   }




}

