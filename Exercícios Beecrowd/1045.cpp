#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;
int main(){

double A, B, C; ///Definição de variaveis
double maior, meio, menor;
cin >> A >> B >> C; /// Entrada dos Valores no teclado

/// teste de com desvios condicionais. Posssibilidades: ABC, ACB, BAC, BCA, CAB e CBA

if (A >= B && A >= C) { /// ABC, ACB
        maior = A;
    if (B >= C) {
        meio = B;
        menor = C;
    }else {
        meio = C;
        menor = B;
        }
}else if (B >= A && B >= C) { /// BAC, BCA
        maior = B;
    if (A >= C) {
        meio = A;
        menor = C;
    }else {
        meio = C;
        menor = A;
        }
}else if (C >= A && C >= B) { /// CAB e CBA
        maior = C;
    if (A >= B) {
        meio = A;
        menor = B;
    }else {
        meio = B;
        menor = A;
        }
    }

    A = maior;
    B = meio;
    C = menor;

  if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }else {

    if (A*A == B*B + C*C)
        cout << "TRIANGULO RETANGULO" << endl;

    if (A*A > B*B + C*C)
        cout << "TRIANGULO OBTUSANGULO" << endl;

    if (A*A < B*B + C*C)
        cout << "TRIANGULO ACUTANGULO" << endl;

    if (A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;

    else if (A == B || A == C || B == C)
        cout << "TRIANGULO ISOSCELES" << endl;
    }
return 0;
}
