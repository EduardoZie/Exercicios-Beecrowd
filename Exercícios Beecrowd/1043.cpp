#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main (){
double A, B, C, SomaL, Area;
cin >> A >> B >> C;

if (A + B > C && A + C > B && B + C > A ){
    SomaL= A + B + C;
    cout << fixed << setprecision(1) << "Perimetro = " << SomaL << endl;  
}else{
    Area = ((A + B) * C) / (2);
    cout << fixed << setprecision(1) << "Area = " << Area << endl;
}
return 0;
}