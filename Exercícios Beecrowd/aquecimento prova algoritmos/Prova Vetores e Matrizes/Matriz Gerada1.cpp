#include <iostream>
using namespace std;

int main(){

    int pos;
    cin >> pos;

    int M[6][6];

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){

            int cima = i;
            int baixo = 5-i;
            int esq = j;
            int dir = 5-j;

            int menor = min(min(cima, baixo), min(esq, dir));

            M[i][j] = menor+1;
        }
    }

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){

            if(j>0)
                cout << " ";

            cout << M[i][j];
        }
        cout << endl;
    }

    int linha = pos/6;
    int coluna = pos%6;

    cout << M[linha][coluna] << endl;

    return 0;
}