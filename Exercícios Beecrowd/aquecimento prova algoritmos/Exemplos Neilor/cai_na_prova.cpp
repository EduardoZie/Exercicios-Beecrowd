/**
Leia um valor X e:
a)   Apresente os 20 primeiros valores da sequencia abaixo
  x/2 , (x+1) / 4 , (x+2) / 6, (x+3) / 8,...
**/

#include <iostream>

using namespace std;

int main() {
   int i;
   double x, num, den;
   cin >> x;
   double soma = 0;
   for (i=1, num = x, den = 2; i<=20; i=i+1 ,num=num +1, den=den+2 ) {
      cout << num / den << endl ;
      soma = soma + num/den;
   }
   cout << "Soma = " << soma << endl;
}





/**
Leia um valor X e:
b)   Apresente os 10 primeiros valores da sequencia abaixo e a soma deles
x/2 , x+1/4 , x+2 /6, x+3/8,...
**/
/**
Leia um valor Y e:
c) Apresente a soma dos valores da sequencia abaixo, lendo o y
y /2 , y+2 /4, Y+4 /8, y+6 / 16.... ... ?/256

**/
