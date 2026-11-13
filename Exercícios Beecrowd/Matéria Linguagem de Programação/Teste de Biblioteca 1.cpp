#include "MinhaLib.h"

int main(){

    int Opcao_Servico;
    double Saldo_Atual = 1000.00, Valor_Deposito, Valor_Saque;
    bool ProcessB = true;

    cout << endl;
    cout << "---------- Sistema Bancario ----------" << endl << endl;
    cout << " 1 - Ver saldo" << endl;
    cout << " 2 - Depositar" << endl;
    cout << " 3 - Sacar" << endl;
    cout << " 4 - Transferir " << endl;
    cout << " 5 - Extrato " << endl;
    cout << " 0 - Sair" << endl << endl;

    while (ProcessB == true){

        cout << endl;
        cout << "Selecione uma das opcoes acima: " << endl;
        cout << "Digite: " << endl;
        cin >> Opcao_Servico;

        switch (Opcao_Servico){
            case 1:
            cout << fixed << setprecision(2);
            cout << "Saldo Atual da sua Conta: R$" << Saldo_Atual << endl;
        break;
            case 2:
            cout <<"Digite o valor a ser depositado:" << endl;
            cin >> Valor_Deposito;
                if (Valor_Deposito<=0){
                cout << "Erro... Reinicie o processo de deposito!" << endl;
                }else{
                cout << "Valor depositado com sucesso!" << endl;
                Saldo_Atual = Saldo_Atual + Valor_Deposito;
            }
                break;
            case 3:
            cout <<"Digite o valor a ser sacado:" << endl;
            cin >> Valor_Saque;
                if (Valor_Saque>Saldo_Atual){
                cout << "Saldo insuficiente" << endl;
                }else{
                cout << "Valor retirado com sucesso!" << endl;
                Saldo_Atual = Saldo_Atual - Valor_Saque;
            }
                break;
    }
}
    return 0;
}
