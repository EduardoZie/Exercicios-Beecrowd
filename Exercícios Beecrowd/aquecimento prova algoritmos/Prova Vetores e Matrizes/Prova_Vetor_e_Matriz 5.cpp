#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;

    int M[6][6];
    int resposta;

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            int distTopo = i;
            int distEsquerda = j;
            int distBaixo = 5 - i;
            int distDireita = 5 - j;

            int menor = distTopo;
            if(distEsquerda < menor) menor = distEsquerda;
            if(distBaixo < menor) menor = distBaixo;
            if(distDireita < menor) menor = distDireita;

            M[i][j] = menor + 1;

            if(i*6 + j == N) resposta = M[i][j];
        }
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    cout << resposta << endl;

    return 0;
}