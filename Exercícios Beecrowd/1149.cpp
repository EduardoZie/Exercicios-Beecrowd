#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

int Valor_a, Valor_n, i, Soma=0;
cin >> Valor_a;

while(cin>>Valor_n){
    if(Valor_n>0)
    break;
}
for(i=Valor_a; i<Valor_a+Valor_n; i++){
    Soma = Soma+i;
}
cout << Soma << endl;

return 0;
}