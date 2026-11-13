#include <iostream>
#include <iomanip>
#include <cmath>
#define TAM 7
using namespace std;

int main(){
    int M[TAM][TAM];

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(i==j){
            M[i][j]=0;
            }else{
            M[i][j]=i + j;
            }
        }
    }

    for (int i=0; i<TAM; i++){
        for (int j=0; j<TAM; j++){
            cout <<"m[" << i <<"][" << j <<"]=" << M[i][j] << endl;
        }
    }

    return 0;
}