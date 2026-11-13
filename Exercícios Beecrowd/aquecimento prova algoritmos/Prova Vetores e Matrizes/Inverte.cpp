#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int Vetor[20];

    for (int i=0;i<20;i++){
        cin >> Vetor[i];
    }

    for (int i=0;i<10;i++){
        swap(Vetor[i], Vetor[19-i]);
    }

    
    for (int i=0;i<20;i++){ 
        cout << Vetor[i] << endl;
    }
    
    return 0;
}