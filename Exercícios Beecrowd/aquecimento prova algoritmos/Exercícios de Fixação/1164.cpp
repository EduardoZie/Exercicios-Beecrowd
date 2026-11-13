#include <iostream>
using namespace std;

int main() {

    int N; ///Aqui eu faço a definição de variaveis
    
    cin >> N; /// Aqui faço a leitura

    /// Nesse primeiro for basicamente ele cuida da quantidade de testes
    for (int i = 1; i <= N; i++) {

        int numero;
        cin >> numero;

        int soma = 0;
        
        /// Quanto esse for esse faz o teste realmente
        for (int X = 1; X < numero; X = X+1) {/// enquanto x for menor que o numero ele vai testar os restos de divisão

            if (numero % X == 0) {/// se for uma divisão exata ele adiciona a variavel soma que sera realizado o teste, quando ele parar de somar pro numero ser perfeito ele precisa ser assim ex: 1+2+3 = 6
                soma = soma + X;
            }

        }

        if (soma == numero) {/// se o resultado da soma for igual a numero que foi digitado ele é perfeito, caso for qualquer outra coisa ele cai no bloco do else e n é perfeito
            cout << numero << " eh perfeito" << endl;
        } else {
            cout << numero << " nao eh perfeito" << endl;
        }

    }

    return 0;
}