#include <bits/stdc++.h>
using namespace std;

int main() {
    string Risadas, Vogais, Inverso;
    cin >> Risadas;

    for (char letra : Risadas) {/// pode ser feito assim  recebendo o char n o indice
        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u') {
            Vogais = Vogais+letra;
        }
    }

    for (int i=Vogais.length()-1; i>=0; i--) {
        Inverso = Inverso + Vogais[i];
    }

    if(Vogais==Inverso){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}