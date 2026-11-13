#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#define TAM 7
using namespace std;
int main(){

    freopen ("Matriz.txt","r",stdin);
    int M[TAM] [TAM];/* A Matriz usa Linhas e Colunas*/

     int Soma_Valores_Matriz = 0;

    for (int L=0; L<TAM; L++){
        for(int C=0; C<TAM; C++){
            cin >> M[L][C];
            Soma_Valores_Matriz = Soma_Valores_Matriz + M[L] [C];
        }
    }
    for (int L=0; L<TAM; L++){
        for(int C=0; C<TAM; C++){
            cout << M[L][C] << " ";
        }
    } 
    cout << endl;
    cout << "Soma Valores da Matriz : " << Soma_Valores_Matriz << endl;



    return 0;
}
