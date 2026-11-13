#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo, quantidade; /// Definição do codigo e numero de produtos para a multiplicação
    double total;/// total do produto , esta em double pois deve possuir duas casas decimais

    cin >> codigo >> quantidade;
/// Else if pq se for só if ele testa todos os processos
    if (codigo == 1) {
        total = quantidade * 4.00;
     } else if (codigo == 2) {
         total = quantidade * 4.50;
     } else if (codigo == 3) {
         total = quantidade * 5.00;
     } else if (codigo == 4) {
         total = quantidade * 2.00;
     } else if (codigo == 5) {
         total = quantidade * 1.50;
    }
    cout << fixed << setprecision(2) << "Total: R$ " << total << endl;

    return 0;
}
