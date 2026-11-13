#include <iostream>
#include <algorithm>
using namespace std;
#define TAM 10
int main(){
    int V[TAM], Orden[TAM];
    
    for(int i=0; i<TAM; i++){
        cin >> V[i];
        Orden[i] = V[i];
    }
    sort(Orden, Orden + TAM);
    int Limite = Orden[2], Pos=0;
    for(int i=0; i<TAM && Pos<3; i++){
        if(V[i]<=Limite){
            if(Pos>0) cout << " ";
            cout << V[i];
            Pos++;
        }
    }
    cout << endl;
    return 0;
}