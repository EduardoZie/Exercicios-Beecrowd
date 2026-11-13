#include <iostream>

/**
Dado a sigla do estado, com 2 letras
maiusculas, informar se o referido estado
pertence à região SUL do Brasil
**/

using namespace std;

int main() {
   string UF;
   cout << "Digite a sigla de um estado: ";
   cin >> UF;
   //bool entrou = false;
   if (UF == "RS" or UF == "SC" or UF == "PR") { /// se for true, entra
     // entrou = true;
      cout << UF << " Pertence a regiao Sul" << endl;
   } else {
      cout << UF << " Nao pertence a regiao Sul" << endl;
   }

   return 0;
}
