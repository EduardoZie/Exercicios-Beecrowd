#include <iostream>
#include <iomanip>
#include <cmath>
#define Tam 5
using namespace std;
int main(){

    int M[Tam][Tam];
    for(int i=0; i<Tam; i++){
        for(int j=0; j<Tam; j++){
            if(i==j) M[i][j]=0;
            else M[i][j] = i+j;
            }
        }

        for(int i=0; i<Tam; i++){
            for(int j=0; j<Tam; j++){
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}
