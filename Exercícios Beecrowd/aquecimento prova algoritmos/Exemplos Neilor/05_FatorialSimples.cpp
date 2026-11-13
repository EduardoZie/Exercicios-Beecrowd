#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N;
    int fatorial = 1;

    cout << "Digite um numero: ";
    cin >> N;

    for (int i = N; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    cout << "Fatorial = " << fatorial << endl;


    return 0;
}