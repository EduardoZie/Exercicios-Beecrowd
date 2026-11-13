#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    string NOME;
    double FIXO;
    double VENDA;
    double SALARIO;

    cin >> NOME >> FIXO >> VENDA;

    ///Processamento

    SALARIO = FIXO + (VENDA * 0.15);

    ///SAIDA
    cout << fixed << setprecision(2) << "TOTAL = R$ " << SALARIO << endl;



    return 0;
}
