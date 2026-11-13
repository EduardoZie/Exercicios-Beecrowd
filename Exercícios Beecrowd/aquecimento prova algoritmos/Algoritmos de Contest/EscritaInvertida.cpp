#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string linha;

    while(getline(cin, linha)) {
        string palavra = "";

        for(int i = 0; i < linha.size(); i++) {
            if(linha[i] == ' ') {
                reverse(palavra.begin(), palavra.end());
                cout << palavra << " ";
                palavra = "";
            } else {
                palavra += linha[i];
            }
        }

        reverse(palavra.begin(), palavra.end());
        cout << palavra << endl;
    }

    return 0;
}