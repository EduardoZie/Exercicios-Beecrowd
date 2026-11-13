#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    /// Teste de manipulação de char
    int ContadorLetras=0;
    for(int i='a'; i<='z'; i++){
        cout << (char)i << "    ";
        ContadorLetras++;

        if(ContadorLetras==5){
            cout << endl;
            ContadorLetras=0;
        }
    }

    return 0;
}