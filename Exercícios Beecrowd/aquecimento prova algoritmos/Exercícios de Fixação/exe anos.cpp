#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int Ndias, Ano, Mes, Dia;
    cin >> Ndias;
    
    Ano = Ndias / 365;
    Ndias = Ndias % 365;
    
    Mes = Ndias / 30;
    Ndias = Ndias % 30;
    
    Dia = Ndias%30;
    
    cout << Ano << " ano(s)" << endl;
    cout << Mes << " mes(es)" << endl;
    cout << Dia << " dia(s)" << endl;
    
    return 0;
}