#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    double Num, Den, i;

    for(i=0, Num=1000, Den=2; i<18; Num=Num-10, Den++, i++){
        cout << Num/Den << endl;
    }
    return 0;
}