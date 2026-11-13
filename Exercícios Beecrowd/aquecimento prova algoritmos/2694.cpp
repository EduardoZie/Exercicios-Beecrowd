#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int Numero_Entradas;
    string Linha;

    cin >> Numero_Entradas;
    cin.ignore();

    for (int i = 0; i < Numero_Entradas; i++) {
        getline(cin, Linha);

        for (int j = 0; j < Linha.length(); j++) {
            if (Linha[j] < '0' || Linha[j] > '9') {
                Linha[j] = ' ';
            }
        }

        stringstream token(Linha);
        int Num1, Num2, Num3;
        
        token >> Num1 >> Num2 >> Num3;
        
        cout << Num1 + Num2 + Num3 << endl;;
    }

    return 0;
}
