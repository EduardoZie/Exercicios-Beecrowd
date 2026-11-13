#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

string CheckPar(int x){
    string Par_ou_Impar;
    if(x%2==0){
        Par_ou_Impar = "Par";
    }else{
        Par_ou_Impar = "Impar";
    }
    return Par_ou_Impar;
}
int main(){

    int NT, N;
    cout << "Mostre o numero de Testes desejados:" << endl;
    cin >> NT;

    for(int i=0; i<NT; i++){
        cin >> N;
        cout << CheckPar(N) << endl;
    }

    return 0;
}