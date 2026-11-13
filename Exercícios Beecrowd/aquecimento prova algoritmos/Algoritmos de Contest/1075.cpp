#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    for(int i=1; i<= 10000; i=i+1){
        if (i%N == 2){
            cout << i << endl;
        }
    }
    return 0;
}