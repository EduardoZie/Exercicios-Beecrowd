#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int N, L;
    cin >> N;

    for (int i=0; i<N; i=i+1){
        cin >> L;
        if (L % 2 == 0 && L < 0){
            cout <<"EVEN NEGATIVE"<< endl;
        }
    }
    
    return 0;
}