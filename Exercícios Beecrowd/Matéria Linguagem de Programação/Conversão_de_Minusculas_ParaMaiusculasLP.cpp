#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){

    string Frase;
    getline(cin,Frase);

    for(int i=0; i<= Frase.size(); i++){
        if (Frase[i] != 32 and Frase[i]>96)
            Frase[i]=Frase[i]-32;
    }
    cout << Frase << endl;
    /// O pq de utilizr o 32(pq é o espaço)
    /// e o 96 pq o (a) começa em 96, se o end for removido ele pega as maiusculas e transf em minusculas
    return 0;
}