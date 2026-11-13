#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N, X, Y;
    double Divisao;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> X >> Y;
        if (Y == 0){
        cout << "divisao impossivel" << endl;
    }else{

    Divisao = (double)X / Y;

    cout << fixed << setprecision(1) << Divisao << endl;
    }

    }

    return 0;
}