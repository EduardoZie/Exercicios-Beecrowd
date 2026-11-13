#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
int N;
cin >> N;

for (int i=0; i<N; i++){
    int Leitura;
    cin >> Leitura;
        if (Leitura < 0 && Leitura % 2 !=0){
            cout << "ODD NEGATIVE" << endl;
        }
        if (Leitura > 0 && Leitura % 2 == 1){
            cout << "ODD POSITIVE" << endl;
        }
        if (Leitura < 0 && Leitura % 2 == 0){
            cout << "EVEN NEGATIVE"<< endl;
        } 
        if (Leitura > 0 && Leitura % 2 == 0){
            cout << "EVEN POSITIVE" << endl;
        }
        if (Leitura == 0){
            cout << "NULL" << endl;
        }
}

    return 0;
}