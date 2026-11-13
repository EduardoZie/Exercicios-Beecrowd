#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int ContVezes = 0, ContPosit = 0;
    double SomaPosit = 0;

    for (int i = 0; ContVezes < 6; i++){
        double N;
        cin >> N;

        if (N>0){
            ContPosit++;
            ContVezes++;
            SomaPosit = SomaPosit + N;
        }
        if (N<0){
            ContVezes++;
        }
    }

    cout << ContPosit << " valores positivos" << endl;
    cout << fixed << setprecision(1) << SomaPosit/ContPosit << endl;

    return 0;
}