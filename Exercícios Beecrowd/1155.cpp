#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    
    double S, i;

    for(i=1; i<=100;i++){
        S= S+ 1.0/i;
    }
    cout << fixed << setprecision(2) << S << endl;

    
    return 0;
}