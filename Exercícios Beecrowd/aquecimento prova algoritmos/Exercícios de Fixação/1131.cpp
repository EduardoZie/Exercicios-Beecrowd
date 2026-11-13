#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){

   int ContInter=0, ContGremio=0, ContEmpate=0, Quant=0;
   int MenorSul, MaiorSul, Opcao;

   while(Opcao!=2){

    cin >> MenorSul >> MaiorSul;
    Quant++;

    if(MenorSul>MaiorSul) ContInter++;
    
    if(MenorSul<MaiorSul) ContGremio++;
    
    if(MenorSul==MaiorSul) ContEmpate++;
    
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> Opcao;

   }

   cout << Quant << " grenais" << endl;
   cout << "Inter:" << ContInter << endl;
   cout << "Gremio:" << ContGremio << endl;
   cout << "Empates:" << ContEmpate << endl;
   if (ContGremio>ContInter){
    cout << "Gremio venceu mais" << endl;
   }else{
    cout << "Inter venceu mais" << endl;
   }

    return 0;
}