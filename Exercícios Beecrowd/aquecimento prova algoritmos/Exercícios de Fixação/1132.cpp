#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Maior, Menor, N1, N2, SomaMult=0;
    cin >> N1 >> N2;

    if(N1>N2){
        Maior = N1;
        Menor = N2;
    }else if(N1<N2){
        Maior = N2;
        Menor = N1;
    }

    for (int i = Menor; i<=Maior; i++){
        if(i%13!=0){
            SomaMult = SomaMult + i;
        }
    }

    cout << SomaMult << endl;
    return 0;
}