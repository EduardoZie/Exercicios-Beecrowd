#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

    int Numero_2;
   
    while(Numero_2!=0){
        
        for(int i=1; i<=Numero_2; i++){
            cout << i ;
            if(i!=Numero_2){
                cout << " ";
            }
        }
        cout << endl;
        cin >> Numero_2;
    }
    return 0;
} 