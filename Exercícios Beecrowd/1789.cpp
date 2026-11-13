#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int Numero_Lesmas, Velocidede=0, Nivel=0;

    while(cin >> Numero_Lesmas){

        int Maior=0;

        for(int i=0; i<Numero_Lesmas; i++){
            cin >> Velocidede;

            if(Velocidede>Maior) Maior=Velocidede;
        }

        if(Maior<10) Nivel=1;
        else if(Maior>=10 && Maior<20) Nivel=2;
        else if(Maior>=20) Nivel=3;

        cout << Nivel << endl;
        Nivel=0;
    }

    return 0;
}