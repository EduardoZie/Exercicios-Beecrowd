
#include <bits/stdc++.h>
using namespace std;

int main(){
    int Numero_Testes;
    cin >> Numero_Testes;
    cin.ignore();

    while (Numero_Testes--) {
        string Linha, A, B;

        getline(cin,Linha);
        stringstream token(Linha);

        token >> A >> B;

        if (B.length()<=A.length() && A.substr(A.length()-B.length())==B){
            cout << "encaixa" << endl;
        }else{
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}
