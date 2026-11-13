#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double S=1.0;
    double i, j;

    for (i=2, j=3.0; j<=39; i=i*2, j=j+2) {
        S=S+j/i;
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
