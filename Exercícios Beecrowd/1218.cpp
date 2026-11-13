#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

int main(){

    string Linha;
    int N,Numero,Caso=1;
    char Sexo;

    while(getline(cin,Linha)){

        stringstream token(Linha);
        token >> N;

        getline(cin,Linha);
        stringstream token2(Linha);

        int Iguais=0,F=0,M=0;

        while(token2 >> Numero >> Sexo){
            if(Numero==N){
                Iguais++;
                if(Sexo=='F')
                    F++;
                else
                    M++;
            }
        }

        if(Caso>1)
            cout << endl;

        cout << "Caso " << Caso << ":" << endl;
        cout << "Pares Iguais: " << Iguais << endl;
        cout << "F: " << F << endl;
        cout << "M: " << M << endl;
        Caso++;
    }
    return 0;
}