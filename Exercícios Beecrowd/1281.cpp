#include <bits/stdc++.h>
using namespace std;

int main(){

    int Idas_a_Feira;
    cin >> Idas_a_Feira;

    for(int i=0; i<Idas_a_Feira; i++){
        
        int Numero_Frutas;
        string Fruta;
        double Valor, Total_Gasto=0;

        map<string,double> Lista_Frutas;

        cin >> Numero_Frutas;

        for(int i=0; i<Numero_Frutas; i++){
            cin >> Fruta;
            cin >> Valor;
            Lista_Frutas[Fruta] = Valor;
        }

        int Ncompras;
        cin >> Ncompras;

        for(int i=0; i<Ncompras; i++){
            int Quantidade;
            cin >> Fruta;
            cin >> Quantidade;
            Total_Gasto = Total_Gasto + Lista_Frutas[Fruta] * Quantidade;
        }

        cout <<"R$ " << fixed << setprecision(2) << Total_Gasto << endl;
    }

    return 0;
}