#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <sstream> 
 
using namespace std; 
 
int main(){ 
 
    int Numero_de_casos; 
    double Valores, SomaValores=0; 
    int SomaKg=0; 
 
    cin >> Numero_de_casos; 
    cin.ignore(); 
 
    for(int i=0; i<Numero_de_casos; i++){ 
 
        string Linha,Nome; 
        int Cont=0; 
 
        getline(cin,Linha); 
        stringstream token(Linha); 
 
        token >> Valores;  
        SomaValores=SomaValores+Valores; 
 
        getline(cin,Linha); 
        stringstream token2(Linha);  
 
        while(token2>>Nome){  
            Cont++; 
        } 
 
        SomaKg=SomaKg+Cont; 
 
        cout << "day " << i+1 << ": " << Cont << " kg" << endl;
    } 
 
    cout << fixed << setprecision(2); 
    cout << (double)SomaKg/Numero_de_casos << " kg by day" << endl;
    cout << "R$ " << SomaValores/Numero_de_casos << " by day" << endl;
 
    return 0; 
}