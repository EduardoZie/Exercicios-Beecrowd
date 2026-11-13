#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main (){

    double A, B, C, D, R, S, T;
    cin >> A >> B >> C;
    R = pow(A*B+A,4);
    S = pow(B+sqrt(C+2)+1,2);
    T = pow(B-1,4)/(R+sqrt(S+1));
    D = pow(R+A,2)-S*T;
    cout << fixed << setprecision(1) << D << endl;
return 0;
}