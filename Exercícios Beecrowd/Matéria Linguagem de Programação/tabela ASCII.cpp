#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cont=1;
    for (int i=32; i<=254; i++) {
       cout << setw(4) << i << " = " << char(i) ;
       if (cont++==10) {
            cont =1;
            cout << endl;
       }
    }
}
