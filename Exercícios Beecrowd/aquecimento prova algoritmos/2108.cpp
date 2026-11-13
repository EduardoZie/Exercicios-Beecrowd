#include <bits/stdc++.h>
using namespace std;
int main(){

    string Frase;
    string MaiorFrase="";
    
    while(getline(cin,Frase)){
        
        if(Frase=="0") break;

        string Palavra;
        stringstream token(Frase);
        vector<string> Palavras;
        
        while(token >> Palavra){
            Palavras.push_back(Palavra);
        }

        for(int i=0; i<Palavras.size(); i++){
            cout << Palavras[i].size();

            if(i<Palavras.size()-1) cout << "-";

            if(Palavras[i].size()>=MaiorFrase.size()){
                MaiorFrase=Palavras[i];
            }
        }

        cout << endl;
    }
    
    cout << "The biggest word: " << endl; 
    cout << MaiorFrase << endl;

    return 0;
}
