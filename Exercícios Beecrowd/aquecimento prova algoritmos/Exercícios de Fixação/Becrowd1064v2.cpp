#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int ContPosit = 0;
    double SomaPosit = 0, N;

    for (int i = 0; i < 6; i++) {
        cin >> N;

        if (N > 0) {
            ContPosit++;
            SomaPosit += N;
        }
    }

    cout << ContPosit << " valores positivos" << endl;
    cout << fixed << setprecision(1) << SomaPosit / ContPosit << endl;

    return 0;
}