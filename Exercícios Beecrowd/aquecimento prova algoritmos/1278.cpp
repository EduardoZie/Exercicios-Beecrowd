
#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    bool Primeiro=true;

    while(cin >> N && N!=0){

        cin.ignore();

        vector<string> Linhas(N);
        string Linha, Palavra;
        int Maior=0;

        for(int i=0; i<N; i++){

            getline(cin,Linha);
            stringstream token(Linha);

            Linhas[i]="";

            while(token >> Palavra){
                if(Linhas[i]!="") Linhas[i]+=" ";
                Linhas[i]+=Palavra;
            }

            if(Linhas[i].size()>Maior)
                Maior=Linhas[i].size();
        }

        if(!Primeiro) cout << endl;
        Primeiro=false;

        for(int i=0; i<N; i++)
            cout << string(Maior-Linhas[i].size(),' ') << Linhas[i] << endl;
    }

    return 0;
}
