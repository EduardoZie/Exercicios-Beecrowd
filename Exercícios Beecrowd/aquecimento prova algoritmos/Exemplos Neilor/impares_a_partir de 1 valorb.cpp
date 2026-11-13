/**
   Decrescente N
**/
#include <iostream>

using namespace std;

int main() {
   int N, quantos;
   cin >> N >> quantos;
   if (N%2==0) N++;
   for (int i=1; i<=quantos; i=i+1, N=N+2) {
      cout << N << endl;
   }



}

