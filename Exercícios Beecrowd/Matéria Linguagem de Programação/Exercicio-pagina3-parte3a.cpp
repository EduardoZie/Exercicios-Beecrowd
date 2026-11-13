#include <iostream>
#include <iomanip>

///** Pesquise na internet C++ I/O flags **/

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
   return 0;
}

