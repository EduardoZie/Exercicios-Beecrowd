#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    while(cin >> N && N!=0){
        map<string,string>Nome_e_Assinatura;
        string Nome, Assinatura;
        int cont= 0;

        for(int i=0; i<N; i++){
            cin >> Nome;
            cin >> Assinatura;
            Nome_e_Assinatura[Nome] = Assinatura;
        }

        int NumeroPresenca;
        string AssinaturaChamada;
        cin >> NumeroPresenca;

        for(int i=0; i<NumeroPresenca; i++){
            cin >> Nome;
            cin >> AssinaturaChamada;

            string Original= Nome_e_Assinatura[Nome];
            int diferencas= 0;

            for(int i=0; i<Original.size(); i++){
                if(Original[i]!= AssinaturaChamada[i]){
                    diferencas++;
                }
            }

            if(diferencas>1){
                cont++;
            }
        }
        cout << cont << endl;
    }

    return 0;
}