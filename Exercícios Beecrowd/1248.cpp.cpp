#include <bits/stdc++.h>
using namespace std;

int main(){

    int Numero_Testes;
    string dieta, M, T;
    bool Cheater = false;

    cin >> Numero_Testes;
    cin.ignore();

    for(int i=0;i<Numero_Testes;i++){
        getline(cin,dieta);
        getline(cin,M);
        getline(cin,T);

        Cheater = false;

        M = M+T;

        for(int i=0;i<M.size();i++){
            int p = dieta.find(M[i]);

            if(p == string::npos){
                Cheater = true;
            }else{
                dieta.erase(p,1);
            }
        }

        if(Cheater){
            cout << "CHEATER" << endl;
        }else{
            sort(dieta.begin(),dieta.end());
            cout << dieta << endl;
        }
    }

    return 0;
}