#include <bits/stdc++.h>
using namespace std;

int main(){
    int NumeroT;
    cin >> NumeroT;

    while(NumeroT--){
        string PalavraA, PalavraB, resultado="";
        cin >> PalavraA >> PalavraB;

        int i=0;

        while(i<PalavraA.size() && i<PalavraB.size()){
            resultado = resultado + PalavraA[i];
            resultado = resultado + PalavraB[i];
            i++;
        }

        while(i<PalavraA.size()){
            resultado = resultado + PalavraA[i];
            i++;
        }

        while(i<PalavraB.size()){
            resultado = resultado + PalavraB[i];
            i++;
        }
        cout << resultado << endl;
    }
    return 0;
}
