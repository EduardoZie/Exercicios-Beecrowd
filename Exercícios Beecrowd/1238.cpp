
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numerotestes;
    cin >> numerotestes;

    while(numerotestes--){
        
        string A, B, resultado = "";
        cin >> A >> B;

        for (int i=0; i<A.size() && i<B.size(); i++) {
            resultado=resultado + A[i];
            resultado=resultado + B[i];
        }

        resultado += A.substr(min(A.size(), B.size()));
        resultado += B.substr(min(A.size(), B.size()));

        cout << resultado << endl;
    }

    return 0;
}
