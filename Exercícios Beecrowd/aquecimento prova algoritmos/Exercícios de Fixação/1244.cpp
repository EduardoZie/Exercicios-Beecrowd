#include <bits/stdc++.h>
using namespace std;

struct Palavra {
    string texto;
    int posicao;  
};


bool comparar(Palavra a, Palavra b) {
    if (a.texto.size() != b.texto.size()) {
        return a.texto.size() > b.texto.size();   
    }
    return a.posicao < b.posicao;   
}

int main() {
    int Numero;
    cin >> Numero;
    cin.ignore();   

    for (int i=0; i<Numero; i++) {
        string linha;
        getline(cin, linha);

        istringstream token(linha);
        Palavra v[50];     
        int qtd = 0;       
        string palavra;

        while (token >> palavra) {
            v[qtd].texto = palavra;
            v[qtd].posicao = qtd;
            qtd++;
        }

        sort(v,v + qtd, comparar);

        for (int i=0; i<qtd; i++) {
            if (i>0) {
                cout << " ";
            }
            cout << v[i].texto;
        }
        cout << endl;
    }
    return 0;
}