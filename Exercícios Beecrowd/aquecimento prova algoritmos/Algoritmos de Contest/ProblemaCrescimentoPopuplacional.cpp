#include <iostream>
using namespace std;

int main(){
    int N, ContAnos1;
    double Cidade1, Cidade2;   
    double Perc1, Perc2;
    
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> Cidade1 >> Cidade2 >> Perc1 >> Perc2;
        ContAnos1 = 0;
        
        while (Cidade1 <= Cidade2 && ContAnos1 <= 100){
            Cidade1 = Cidade1 + (Cidade1 * Perc1 / 100.0);  
            Cidade2 = Cidade2 + (Cidade2 * Perc2 / 100.0);
            ContAnos1++;
        }
        
        if (ContAnos1 > 100){
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << ContAnos1 << " anos." << endl;
        }
    }
    return 0;
}