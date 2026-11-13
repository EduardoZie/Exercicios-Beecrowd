#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int N;
    cin >> N;

    for(int i=1; i<=N; i++){
        cout << i << " " << i*i << " " << pow(i,3) << endl;
    }

    return 0;
}