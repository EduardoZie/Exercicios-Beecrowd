#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){

int Numero_da_Compra, Valor_Pago, Resto;

cin >> Numero_da_Compra >> Valor_Pago;
Resto = Valor_Pago - Numero_da_Compra;

Resto / 100;
Resto = Resto % 100;

Resto / 50;
Resto = Resto % 50;

Resto / 20;
Resto = Resto % 20;

Resto / 10;
Resto = Resto % 10;

Resto / 5;
Resto = Resto % 5;

Resto / 2;
Resto = Resto % 2;

if(Resto==0){
     cout << "possible" << endl;
}else{
     cout << "impossible" << endl;
}

return 0;
}