#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int X;
    double Y;
    double MEDIA;

    cin >> X >> Y;

    MEDIA = X / Y;

    cout << fixed << setprecision(3) << MEDIA << " km/l" << endl;

    return 0;
}
