/** Fibonacci
   0 1 1 2 3 5 8 13

penultimo = 0  1  1  2
ultimo      1  1  2  3
proximo     1  2  3  5
**/
#include <iostream>

using namespace std;

int main() {
   int penultimo = 0, ultimo = 1; /// termos 1 e 2
   int N, proximo;
   cin >> N;
   cout << "0 1 ";
   for (int i = 3; i <= N; i = i + 1) {
       proximo = penultimo + ultimo; /// = 0 + 1
       penultimo = ultimo;
       ultimo = proximo;
       cout << ultimo << " " ;
   }
}

