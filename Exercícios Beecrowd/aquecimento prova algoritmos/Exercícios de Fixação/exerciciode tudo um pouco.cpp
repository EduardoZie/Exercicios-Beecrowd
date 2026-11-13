#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string Nome; 
    int idade;
    double Valor;
    int D, C, P;

    /// NOME
    cout << "Digite seu Nome:" << endl;
    cin >> Nome;
    
    /// IDADE
    cout << "Digite sua idade:" << endl;
    cin >> idade;
    if (idade >= 18){
        cout << "Compra permitida" << endl;
    }else if (idade > 0 && idade <= 18){
        cout <<"Compra nao permitida" << endl;
    }else if (idade < 0){
        cout << "Erro, reinicie o processo de fornecimento de dados" << endl;
        return 0;
    }
    /// VALOR
    cout <<"Informe o valor da compra:" << endl;
    cin >> Valor;
    if (Valor <=0){
        cout <<"Digite um valor valido" << endl;
        cin >> Valor;
    }
    
    /// FORMA DE PAGAMENTO
    cout <<"Escolha uma forma de pagamento" << endl;
    cout <<"1-Dinheiro: D" << endl;
    cout <<"2-Cartao: C" << endl;
    cout <<"3-Pix: P" << endl;
    
    
    return 0;
}