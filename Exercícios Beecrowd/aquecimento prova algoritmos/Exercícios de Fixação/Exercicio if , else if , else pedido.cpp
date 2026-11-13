#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

int cod, quant;
double T;

/// Imformacoes na tela
cout << "Item 1 R$ 10.00 = Coca-Cola 1L" << endl;
cout << "Item 2 R$ 20.00 = Hamburguer" << endl;
cout << "Item 3 R$ 30.00 = Pizza" << endl;
cout << "Item 4 R$ 5.50 = Pao de queijo" << endl;
cout << "Item 5 R$ 11.25 = Energetico" << endl;
cout << " " << endl;/// pula linha

/// Inicio de entrada no teclado
cout << "Digite o Codigo do Pedido:" << endl;
cin >> cod;
if (cod > 5 || cod <1){
    cout << "Codigo inexistente, reinicie o processo de selecao" << endl;
    return 0;
}
cout << "Digite a quantidade desejada:" << endl;
cin >> quant;

if (cod == 1){
    T = quant * 10.00;
}else if(cod == 2){
    T = quant * 20.00;
}else if(cod == 3){
    T = quant * 30.00;
}else if(cod == 4){
    T = quant * 5.50;
}else if(cod == 5){
    T = quant * 11.25;
}
cout << fixed << setprecision(2) <<"Total: R$ "  << T << endl;
return 0;}