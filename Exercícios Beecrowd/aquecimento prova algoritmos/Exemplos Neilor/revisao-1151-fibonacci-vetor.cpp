/** Fibonacci
   0 1 1 2 3 5 8 13

penultimo = 0  1  1  2
ultimo      1  1  2  3
proximo     1  2  3  5
**/
#include <iostream>

using namespace std;

int main() {
   int Fib[40],N;
   Fib[1]=0;
   Fib[2]=1;
   cin >> N;
   cout << "0 1 ";
   for (int i = 3; i <= N; i = i + 1) {
       Fib[i]=Fib[i-1]+Fib[i-2];
       cout << Fib[i] << " " ;
   }
}

