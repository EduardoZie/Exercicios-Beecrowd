#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){

    int idade;
    string nome;
    cin >> nome >> idade;
    if (idade>=16){
        cout << nome << " pode votar" << endl;
    }else{
        cout << nome << " nao pode votar" << endl;
    }
return 0;
}