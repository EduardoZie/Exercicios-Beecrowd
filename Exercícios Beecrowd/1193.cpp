#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

string Binario(long long Number){
    string Saida = "";
    for(long long i=Number; i>0;i=i/2){
        
        int X = i % 2;
        Saida=char(X + '0') + Saida;/// converte pros char da tabela
    }
    return Saida; 
}

int main(){

    int NumeroTestes;
    string Descricao,Numero_Pra_Converter;

    cin >> NumeroTestes;/// Lemos o n de casos
    
    for(int i=1; i<=NumeroTestes; i++){
        cin >> Numero_Pra_Converter >> Descricao; /// as conversoes sao definidas pela descricao

        if(Descricao=="bin"){
            
            cout << "Case " << i << ":" << endl;
            long long numero = stoll(Numero_Pra_Converter, nullptr, 2);
            cout << dec << numero << " dec" << endl;
            cout << hex << numero << dec << " hex" << endl << endl;

        }
        if(Descricao=="dec"){
            
            cout << "Case " << i << ":" << endl;
            long long numero = stoll(Numero_Pra_Converter); /// string pra int
            cout << hex << numero << dec << " hex" << endl;
            cout << Binario(numero) << " bin" << endl;/// Vai ser recebido e processado pela função

        }
        if(Descricao=="hex"){   
            
            cout << "Case " << i << ":" << endl;
            long long numero = stoll(Numero_Pra_Converter, nullptr, 16);
            cout << dec << numero << " dec" << endl;
            cout << Binario(numero) << " bin" << endl;

        }
    }

    return 0;
}