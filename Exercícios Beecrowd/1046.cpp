#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
int i, f, duracao;
cin >> i >> f;

if (i < f){
    duracao = f - i;
    cout <<"O JOGO DUROU " << duracao << " HORA(S)" << endl;
}else if (i > f){
    duracao = (24 - i) + f;
    cout <<"O JOGO DUROU " << duracao << " HORA(S)" << endl;
}else if(i == f){
    duracao = 24;
    cout <<"O JOGO DUROU " << duracao << " HORA(S)" << endl;
}
    return 0;
}