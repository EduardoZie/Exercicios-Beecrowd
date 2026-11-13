#include <iostream>
#define TAM 6
using namespace std;
int main() {
    
    int M[TAM][TAM];
    int Pos;
    cin >> Pos;
    
    for(int i=0; i<TAM; i++) {
        for(int j=0; j<TAM; j++) {
            
            if(i==j) M[i][j] = 1;
            else if(i+j==5) M[i][j] = 2;
            else M[i][j] = 3;    
        }
    }
    for(int i=0; i<TAM; i++) {
        for(int j=0; j<TAM; j++) {
            if(j>0) cout << " ";
            cout << M[i][j];
        }
        cout << endl;
    }
    int Linha=Pos/TAM;
    int Coluna=Pos%TAM;
    cout << M[Linha][Coluna] << endl;
    return 0;
}