#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Idade;
    double MediaIdade,SomaIdade=0, contQuantidade=0;

    while (cin >> Idade && Idade >= 0){

        contQuantidade++;
        SomaIdade = SomaIdade+Idade;
        MediaIdade = SomaIdade / contQuantidade;
    }
        
    cout << fixed << setprecision(2) << MediaIdade << endl;

    return 0;
}
