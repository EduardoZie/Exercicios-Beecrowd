#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double Matriz[12][12], Soma=0;
    char Operacao;

    cin >> Operacao;

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> Matriz[i][j];

            if(j>i && i+j<11){
                Soma += Matriz[i][j];
            }
        }
    }

    if(Operacao=='M'){
        Soma /= 30;
    }

    cout << fixed << setprecision(1) << Soma << endl;

    return 0;
}