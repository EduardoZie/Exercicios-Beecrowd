#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int X;
    cout <<"Digite um numero inteiro:"<< endl;/// mensagem antes da leitura
    cin >> X;/// entrada valor no teclado
    if (X%2 == 0)
    {
        cout << "Par" << endl;
    }
    else if (X%2 == 1)
    {
        cout << "Impar" << endl;
    }

    return 0;
}
