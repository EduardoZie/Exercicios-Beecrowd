#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    string Valor_Inteiro;
    int Soma = 0,Cont=0;

    getline(cin,Valor_Inteiro);

    for(int i=0; i<Valor_Inteiro.size(); i++){
        Soma= Soma + Valor_Inteiro[i]-'0';
        cout << Valor_Inteiro[i] << " ";
    }
    cout << endl;
    cout << "Soma dos Valores dos caracteres da tabela ASCII: " << endl;
    cout << Soma << endl;
    return 0;
}