#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, R1, R2, Delta;

    cin >> a >> b >> c;

    Delta = b*b - 4*a*c;

    if(a == 0 || Delta < 0){
        cout << "Impossivel calcular" << endl;
    }else{
        R1 = (-b + sqrt(Delta)) / (2*a);
        R2 = (-b - sqrt(Delta)) / (2*a);

        cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
        cout << fixed << setprecision(5) << "R2 = " << R2 << endl;
    }

    return 0;
}