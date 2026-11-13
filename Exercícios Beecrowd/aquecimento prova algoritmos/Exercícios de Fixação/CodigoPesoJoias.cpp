#include <bits/stdc++.h>

using namespace std;

int main(){

    double VOLUME, VOLUMEPRATA, VOLUMEOURO;
    double V;

    while(true){

        // Limpa o terminal (Windows: "cls" | Linux/Mac: "clear")
        system("cls || clear");

        cout << "Digite o Volume para a Realizacao do Calculo" << endl;
        cout << "(Digite 0 para sair)" << endl;

        cin >> V;

        if(V == 0) break;

        VOLUME      = V / 1000 * 8.6;
        VOLUMEPRATA = V / 1000 * 9.49;
        VOLUMEOURO  = V / 1000 * 19.3;

        // Limpa novamente para mostrar só o resultado
        ///system("cls || clear");

        cout << "==============================" << endl;
        cout << "  Volume informado: " << V << " mm³"  << endl;
        cout << "==============================" << endl;
        cout << fixed << setprecision(2);
        cout << "Peso da Peca em Latao     = " << VOLUME      << " g" << endl;
        cout << "Peso da Peca em Prata 925 = " << VOLUMEPRATA << " g" << endl;
        cout << "Peso da Peca em Ouro 18k  = " << VOLUMEOURO  << " g" << endl;
        cout << "==============================" << endl;
        cout << "\nPressione ENTER para novo calculo...";
        cin.ignore();
        cin.get();
    }

    cout << "Programa encerrado." << endl;

    return 0;
}