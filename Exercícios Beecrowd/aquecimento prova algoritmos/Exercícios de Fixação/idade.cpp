#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int X;
    cout << "Digite sua idade: " << endl;
    cin >> X;

    if (X>= 18){
        cout << "Maior de idade" << endl;
    }
    else if (X<= 18){
        cout << "Menor de idade" << endl;
    }
return 0;
}
