#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,double>Valores={
        {'W',1.0},{'H',0.5},{'Q',0.25},{'E',0.125},{'S',0.0625},{'T',0.03125},{'X',0.015625}};

    string Linha;
    while(getline(cin,Linha) && Linha[0]!='*') {
        double Soma= 0;
        int Cont_Certos= 0;

        for(char c:Linha) {
            if(c=='/') {
                if(Soma==1.0) Cont_Certos++;
                Soma=0;
            }else{
                Soma= Soma+Valores[c];
            }
        }
        cout << Cont_Certos << endl;
    }
    return 0;
}