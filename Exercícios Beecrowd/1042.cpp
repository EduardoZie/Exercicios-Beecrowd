#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    int menor, meio, maior;
    cin >> a >> b >> c;
    
    if (a <= b && a <= c){
        menor = a;
        if (b <= c){
            meio = b;
            maior = c;
        }else{
            meio = c;
            maior = b;
        } 
    }else if( b <= a && b <= c){
        menor = b;
        if (a <= c){
            meio = a;
            maior = c;
        }else{
            meio = c;
            maior = a;
        } 
    }else{
        menor = c;
        if (a <= b){
            meio = a;
            maior = b;
        }else{
            meio = b;
            maior = a;
        } 
    }

    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
   
    return 0;
}