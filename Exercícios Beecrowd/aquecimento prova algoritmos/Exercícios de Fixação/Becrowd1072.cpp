#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int NumeroCasos, ContIN=0, ContOUT=0;
    
    cin >> NumeroCasos;
    while (NumeroCasos--){
        int N;
        cin >> N;

        if (N>=10 and N<=20){
            ContIN++;
        }else{
            ContOUT++;
        }
    }

    cout << ContIN << " in" << endl;
    cout << ContOUT << " out" << endl;
  
    return 0;
}