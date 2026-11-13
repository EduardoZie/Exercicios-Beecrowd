#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
  /// Definição de Variaveis
  double n1, n2, n3, n4, Mf, M, Nexame, Mexame;

  /// Entrada no teclado
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cin >> n4;

  /// Calculo de media
  M = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (10);

    if (M >= 7.0 ){
    cout << fixed << setprecision(1) << "Media: " << M << endl;
    cout << "Aluno aprovado." << endl;
  }
  else if (M < 5.0){
    cout << fixed << setprecision(1) << "Media: " << M << endl;
    cout << "Aluno reprovado." << endl;
  }
  else if (M <= 6.9 && M >= 5.0){
    cin >> Nexame;
    Mexame = (M + Nexame) / (2);
    cout << "Media: " << M << endl;
    cout << "Aluno em exame." << endl;
    cout << fixed << setprecision(1) << "Nota do exame: " << Nexame << endl;
    if (Mexame >= 5.0){
        cout << "Aluno aprovado." << endl;
        cout << fixed << setprecision(1) << "Media final: " << Mexame << endl;
    } else{
        cout << "Aluno reprovado." << endl;
    }   cout << fixed << setprecision(1) << "Media final: " << Mexame << endl;
  }
    return 0; /// Levou cerca de  40 para finalizar
    }
