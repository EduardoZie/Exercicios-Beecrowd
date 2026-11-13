#include <bits/stdc++.h>
using namespace std;
int main(){
    int Qtd_Palavras,Qtd_Cargos;
    cin>>Qtd_Palavras>>Qtd_Cargos;

    map<string,double>Dicionario;

    for(int i=0;i<Qtd_Palavras;i++){
        string palavra;
        double valor;
        cin>>palavra>>valor;
        Dicionario[palavra]=valor;
    }

    for(int i=0;i<Qtd_Cargos;i++){
        double Salario=0;
        string palavra;
        
        while(cin>>palavra && palavra!="."){
            Salario= Salario+Dicionario[palavra];
        }
        cout<<fixed<<setprecision(0) << Salario << endl;
    }
    return 0;
}