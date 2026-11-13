#include <iostream>
using namespace std;

int main(){
    /// Definição das variaveis
    int hi, mi, si, hf, mf, sf;
    int diaIni, diaFim;
    int inicio, fim, duracao;
    int dias, horas, minutos, segundos;
    string Dia;
    char dois_pontos;

    // Entrada
    cin >> Dia >> diaIni;
    cin >> hi >> dois_pontos >> mi >> dois_pontos >> si;

    cin >> Dia >> diaFim;
    cin >> hf >> dois_pontos >> mf >> dois_pontos >> sf;

    inicio = diaIni * 86400 + hi * 3600 + mi * 60 + si; /// Faz as coversoes pra segundos
    fim    = diaFim * 86400 + hf * 3600 + mf * 60 + sf; /// Faz as coversoes pra segundos

    /// Divisoes pra começar a converter os valores de volta
    duracao = fim - inicio;
    dias = duracao / 86400;
    duracao = duracao % 86400;
    horas = duracao / 3600;
    duracao = duracao % 3600;
    minutos = duracao / 60;
    segundos = duracao % 60;

    /// Saida na tela
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
