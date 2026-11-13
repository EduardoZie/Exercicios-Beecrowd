#include <iostream>
using namespace std;

int main() {

    int N, Menor_Valor, Posicao=0;
    cin >> N;

    int Vetor[N];

    for(int i = 0; i<N; i++){
        cin >> Vetor[i];

        if(i == 0) {
        Menor_Valor = Vetor[i];
        }

        if(Vetor[i]<Menor_Valor){
            Menor_Valor = Vetor[i];
            Posicao = i;

        }

    }

    cout <<"Menor valor: " << Menor_Valor << endl;
    cout << "Posicao: " << Posicao << endl;

    return 0;
}