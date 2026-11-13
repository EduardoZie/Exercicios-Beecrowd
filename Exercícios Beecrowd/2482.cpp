#include<bits/stdc++.h>
using namespace std;

int main(){
    int Tipos_Lingua;
    cin >> Tipos_Lingua;
    cin.ignore();

    map<string,string>Lingua_Escrita;
    string Lingua,Escrita;

    for(int i=0; i<Tipos_Lingua; i++){
        getline(cin,Lingua);
        getline(cin,Escrita);
        Lingua_Escrita[Lingua]=Escrita;
    }

    int Num_Casos;
    cin >> Num_Casos;
    cin.ignore();

    string Nome;

    for(int i=0; i<Num_Casos; i++){
        getline(cin,Nome);
        getline(cin,Lingua);
        cout << Nome << endl;
        cout << Lingua_Escrita[Lingua] << endl;
        cout << endl;
    }
    return 0;
}