#include<bits/stdc++.h>
using namespace std;

int main(){
    int Instancias;
    cin >> Instancias;

    while(Instancias--){
        
        int Npalavras, Nlinhas;
        cin >> Npalavras >> Nlinhas;
        cin.ignore();

        map<string,string> Dicionario;
        string Japones, Portugues;

        for(int i=0; i<Npalavras; i++){
            getline(cin, Japones);
            getline(cin, Portugues);
            Dicionario[Japones] = Portugues;
        }

        string Linha, Palavra, Traducao;

        for(int i=0; i<Nlinhas; i++){
            getline(cin, Linha);
            stringstream Separador(Linha);
            bool Primeira = true;

            while(Separador >> Palavra){
                if(!Primeira){
                    cout << " ";
                }
                Primeira= false;

                Traducao= Dicionario[Palavra];

                if(Traducao != ""){
                    cout << Traducao;
                }else{
                    cout << Palavra;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}