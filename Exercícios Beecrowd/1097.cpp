#include <iostream>
using namespace std;

int main() {

    int j = 7;

    for(int i = 1; i <= 9; i += 2){
        for(int contador = 0; contador < 3; contador++){
            cout << "I=" << i << " J=" << j - contador << endl;
        }
        j += 2;
    }

    return 0;
}