#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 1000
using namespace std;

int main(){

int N[TAM], T;

cin >> T;

for (int i=0; i < TAM;){

    for(int C=0; C<T; C++){
        cout << "N[" << i << "] = " << C << endl;
        i = i +1;
        if (i==TAM) break;

    }
}
    return 0;
}