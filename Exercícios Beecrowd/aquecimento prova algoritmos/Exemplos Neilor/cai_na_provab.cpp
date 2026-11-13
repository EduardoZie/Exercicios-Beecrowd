/**Leia um valor Y e:
c) Apresente a soma dos valores da sequencia abaixo, lendo o y
y /2 , y+2 /4, Y+4 /8, y+6 / 16.... ... ?/256

**/
#include <iostream>

using namespace std;

int main() {
   double y,num,den;
   cin >> y;
   for (num=0, den=2; den<=256; num=num+2, den=den*2 ) {
       cout << y+num << " / " << den << endl;
       cout << (y+num)/den << endl;

   }



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
