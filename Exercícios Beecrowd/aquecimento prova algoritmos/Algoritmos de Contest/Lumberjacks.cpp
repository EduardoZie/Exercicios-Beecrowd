#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Lumberjacks:" << endl;

    for(int k = 0; k < n; k++) {
        int v[10];
        int contador1 = 0, contador2 = 0;

    for(int i = 0; i < 10; i++)
        cin >> v[i];

    for(int i = 0; i < 9; i++) {
        if(v[i] < v[i+1])
        contador1++;

        if(v[i] > v[i+1])
        contador2++;
        }

        if(contador1 == 9 || contador2 == 9)
        cout << "Ordered" << endl;
        else
        cout << "Unordered" << endl;
    }

    return 0;
}