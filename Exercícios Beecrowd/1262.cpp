#include <bits/stdc++.h>
using namespace std;
int main(){
    string Rastro;
    int Processos;

    while(cin >> Rastro >> Processos){
        int Ciclos=0;
        int posicao=0;

        while(posicao<Rastro.size()){
            if(Rastro[posicao]=='W'){
                Ciclos++;
                posicao++;
            }else{
                int Leituras=0;

                while(posicao<Rastro.size() && Rastro[posicao]=='R' && Leituras<Processos){
                    Leituras++;
                    posicao++;
                }
                Ciclos++;
            }
        }
        cout << Ciclos << endl;
    }

    return 0;
}