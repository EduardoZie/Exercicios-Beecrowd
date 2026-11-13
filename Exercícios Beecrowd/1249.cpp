#include <iostream>
using namespace std;

int main() {
    int N[30];///  cria como se fosse caixas para guardar os int

    N[0] = 100; /// isso define que o primeiro numero desse vetor é 100 

    for (int i = 1; i < 30; i++) {/// aqui quantas vezes vai repetir
        N[i] = N[i-1] - i; /// aqui ele pega por exemplo o N[0] -1 ou seja 100 - 1 = 99 
    }

    for (int i = 0; i < 30; i++) {/// ao mesmo tempo temos outro for que ostra os resultados e age em simultaneeo com o primeiro
        cout << "N[" << i << "]=" << N[i] << endl;
    }

    return 0;
}
