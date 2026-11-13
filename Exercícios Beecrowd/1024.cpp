#include <bits/stdc++.h>
using namespace std;
int main(){

int N;
cin >> N;
cin.ignore();

for(int i=0;i<N;i++){
    
    string Codificar;
    getline(cin,Codificar);

    /// Cada um dos for faz algo: 
   
    /// o primeiro desloca as letras;
    for(int j=0; j<Codificar.size(); j++){
        if((Codificar[j]>='a' && Codificar[j]<='z') || (Codificar[j]>='A' && Codificar[j]<='Z')){
            Codificar[j]= Codificar[j]+3;
        }
    }
    
    /// o segundo inverte a srting;
    for(int i=0; i<Codificar.size()/2;i++){
            
            char Auxiliar = Codificar[i];
            Codificar[i] = Codificar[Codificar.size() - 1 - i];
            Codificar[Codificar.size() - 1 - i] = Auxiliar;
    }

    int Metade; 
    Metade = Codificar.size()/2;
        
    /// e o ultimo pega da metade pra frente e desloca 1 pra tras
    for(int i=Metade; i<Codificar.size();i++){
        Codificar[i]= Codificar[i] - 1; 
    }

    cout << Codificar << endl;
}
    return 0;
}