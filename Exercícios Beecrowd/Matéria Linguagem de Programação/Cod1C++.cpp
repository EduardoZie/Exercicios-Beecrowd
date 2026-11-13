#include "MinhaLib.h"

#define TAM 10

using namespace std;
int main(){

    int treinoVetor[TAM];
    int ContadorMatriz=0;

    cout << "Digite os Dez Valores Necessarios para o preenchimento do vetor:" << endl;
    
    for(int i=0; i<TAM; i++){
        cin >> treinoVetor[i];
    }
    for(int i=0; i<TAM; i++){
        cout << "Vetor[" << i << "] = " << treinoVetor[i] << endl;
    }

    ///Treino Matrizes
    cout << "Digite o Tamanho da Matriz a seguir e preencha a Matriz com os valores desejados:" << endl;
    int Tam;
    cin >> Tam;

    int Matriz[Tam][Tam];
    for(int i=0; i<Tam;i++){
        for(int j=0; j<Tam; j++){
            cin >> Matriz[i][j];
        }
    }

    cout <<"Mostrando os Valores da Matriz..." << endl;
    for(int i=0; i<Tam;i++){
        for(int j=0; j<Tam; j++){
            cout << Matriz[i][j] << " ";
            ContadorMatriz++;

        }
    }

    return 0;
}