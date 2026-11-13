#include <iostream>
#include <iomanip>

///** : scientific · showpoint · boolalpha,

using namespace std;

int main() {
   cout << setfill('-') << setw(6) << right << 123 <<endl;
   cout << dec << setw(6) << left << 123 << endl << endl;
   int valor = 46;

   cout << dec << valor << endl;
   cout << showbase << hex << valor << endl;
   cout << uppercase << hex << valor << endl;
   cout << oct << valor << endl;
   cout << boolalpha << (4>5) << endl;
   cout << 11230 << dec << " " <<  11230 <<  endl;
   cout << "Cientifico: " << scientific << (1234.5678) << endl;
   cout <<  defaultfloat;
   double num1=3.4, num2 = 5.2;

   // 1. Comportamento Padrão (oculta zeros inúteis)
   cout << " --- Normal --- " << endl;
   cout << num1 << endl; // Saída: 5
   cout << num2 << endl; // Saída: 5.2
   // 2. Ativando o showpoint
   cout << " --- Com showpoint --- " << endl;
   cout << showpoint;
   cout << num1 << endl; // Saída: 5.00000 (preenche com zeros)
   cout << num2 << endl; // Saída: 5.20000

   return 0;
}

