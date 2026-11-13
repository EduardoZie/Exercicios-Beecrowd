#include <iostream>
#include <string>
using namespace std;

int main(){

    string Texto;
    int Opcao, Deslocamento;

    cout << "Digite o texto: ";
    getline(cin,Texto);

    cout << "1 - Criptografar" << endl;
    cout << "2 - Descriptografar" << endl;
    cout << "Escolha: ";
    cin >> Opcao;

    cout << "Digite o deslocamento: ";
    cin >> Deslocamento;

    Deslocamento = ((Deslocamento % 26) + 26) % 26;

    if(Opcao == 2) Deslocamento = 26 - Deslocamento;

    if(Opcao == 1 || Opcao == 2){

        for(int i=0; i<Texto.size(); i++){

            if(Texto[i] >= 'A' && Texto[i] <= 'Z'){
                Texto[i] = (Texto[i] - 'A' + Deslocamento) % 26 + 'A';
            }
            else if(Texto[i] >= 'a' && Texto[i] <= 'z'){
                Texto[i] = (Texto[i] - 'a' + Deslocamento) % 26 + 'a';
            }
        }

        cout << "Resultado: " << Texto << endl;
    }
    else{
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
