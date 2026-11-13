#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(){

int NTestes, PopA, PopB, ContadorAnos=0;
double PercentA, PercentB, Add1, Add2;

cin >> NTestes;

for(int i=0; i<NTestes; i++){
    cin >> PopA >> PopB >> PercentA >> PercentB;

    for(int i=0; PopA<=PopB && i<=100; i++){
        
        Add2 = PopB*(PercentB/100); /// Aumento B
        PopB = PopB+Add2;

        Add1 = PopA*(PercentA/100); /// Aumento A
        PopA = PopA+Add1;
        ContadorAnos++;

    }

    if(ContadorAnos>100) cout << "Mais de 1 seculo." << endl;
    else cout << ContadorAnos << " anos." << endl;
    ContadorAnos = 0;
}
return 0;

}