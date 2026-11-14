#include <bits/stdc++.h>
using namespace std;

string converte_minusculas(string Palavras){
    for(int i=0; i<Palavras.size();i++){
        Palavras[i] =toupper(Palavras[i]);
    }
    return Palavras;
}
string maiuscula_e_minuscula(string Frase){
    int cont=0;
    for(int i=0; i<Frase.size(); i++){
        if(Frase[i]!=' '){
            
            if(cont%2==0){
                Frase[i]=toupper(Frase[i]);
            }else{
                Frase[i]=tolower(Frase[i]);
            }
            cont ++;
        }
    }
    return Frase;

}
bool ordena_decrescente(int a, int b){
    return a > b;
}
bool ordena_decrescentechar(char a, char b){
    return a > b;
}
bool ordena_par_impar(int a, int b){
     if (a%2 != b%2) {       ///Se comparar um par com um impar
        return a%2 < b%2;    ///retorna primeiro os pares depois impares
    } else {                 /// Os dois são pares ou são í­mpares
       if (a%2==0) {         ///se os dois forem pares
          return a < b;      /// ordem crescente
       } else {              ///se os dois forem í­mpares
          return a > b;      /// ordem decrescente
       }
    }
}


int main(){
    
    /// Estudo conversão de Char para minusculas
    cout << "Digite algo pra conversao pra Maiusculo:" << endl;
    string Paalavra;
    getline(cin,Paalavra);
    cout << converte_minusculas(Paalavra) << endl;
    
    /// Estudo conversão de Char para maiusculas e minusculas sem contar os espacos
    cout << "Digite algo pra tranformar a frase:" << endl;
    string Frase;
    getline(cin,Frase);
    cout << maiuscula_e_minuscula(Frase) << endl;

    ///Estudo Ler Vetor e ordenar
    cout << "Digite o Tamanho do Vetor:" << endl;
    int Tamanho;
    cin >> Tamanho;
    cin.ignore();

    cout << "Digite os Valores do Vetor:" << endl;
    int vetor_numeros[Tamanho];
    for(int i=0; i<Tamanho; i++){
        cin >> vetor_numeros[i];
        cin.ignore();
    }

    sort(vetor_numeros, vetor_numeros+Tamanho);
    
    cout << "Vetor Ordenado crescente" << endl;
    for(int j=0; j<Tamanho;j++){
        cout << vetor_numeros[j] << " ";
    }
    cout << endl;
    sort(vetor_numeros,vetor_numeros+Tamanho,ordena_decrescente);
    
    cout << "Vetor Ordenado decrescente" << endl;
    for(int k=0; k<Tamanho;k++){
        cout << vetor_numeros[k] << " ";
    }
    cout << endl;

    ///Estudo Ordenacao de Letras de um nome
    cout <<"Digite um nome qualquer:" << endl;
    string Nome, nome_mantem_original;
    getline(cin,Nome);

    nome_mantem_original = Nome;

    char vetor[Nome.size()];
    for(int i=0; i<Nome.size();i++){
        vetor[i] = Nome[i];
    }
    
    sort(vetor,vetor+Nome.size());
    cout << "Nome Ordenado em ordem ALFABETICA E ALINHADO COM TABELA ASCII" << endl;
    for(int i=0; i<Nome.size();i++){
        cout << vetor[i];
    }
    cout << endl;

    cout << "Nome Ordenado em ordem DECRESCENTE" << endl;
    sort(nome_mantem_original.begin(), nome_mantem_original.end(), ordena_decrescentechar);
    cout << nome_mantem_original << endl;

    /// Ordenando um vetor primeiramente pares
    /// depois impares

    cout << "Qual o valor desejado para a ordenacao par e impar?"<< endl;
    int numero_vetor_p_i;
    cin >> numero_vetor_p_i;
    cin.ignore();

    int ordenaPI[numero_vetor_p_i];
    for(int i=0; i<numero_vetor_p_i;i++){
        cin >> ordenaPI[i];
        cin.ignore();
    }

    sort(ordenaPI,ordenaPI+numero_vetor_p_i,ordena_par_impar);

    for(int i=0; i<numero_vetor_p_i;i++){
        cout << ordenaPI[i] << " ";
    }
    cout << endl;

    ///Exercicios Struct
    
    struct estudante{
        string Nome;
        double Altura;
        int Idade;
        int Cod_de_aluno;
        char Genero;
        string Curso;
    };

    cout << "Digite o numero de estudantes a ser cadastrado:" << endl;
    int numero_estudantes;
    cin >> numero_estudantes;
    cin.ignore();

    estudante quantidade[numero_estudantes];

    for(int i=0; i<numero_estudantes;i++){
        
        cout << "Nome:" << endl;
        getline(cin,quantidade[i].Nome);
        
        cout << "Altura:" << endl;
        cin >> quantidade[i].Altura;
        cin.ignore();

        cout << "Idade:" << endl;
        cin >> quantidade[i].Idade;
        cin.ignore();

        cout << "Codigo de aluno:" << endl;
        cin >> quantidade[i].Cod_de_aluno;
        cin.ignore();

        cout << "Genero:" << endl;
        cin >> quantidade[i].Genero;
        cin.ignore();

        cout << "Curso:" << endl;
        getline(cin,quantidade[i].Curso);
    }

    for(int i=0; i<numero_estudantes;i++){
        cout << "[" << i << "] = " << quantidade[i].Nome << endl;
        cout << "Altura --> " << quantidade[i].Altura << endl;
        cout << "Idade --> " << quantidade[i].Idade << endl;
        cout << "Cod de Aluno --> " << quantidade[i].Cod_de_aluno << endl;
        cout << "Genero --> " << quantidade[i].Genero << endl;
        cout << "Curso --> " << quantidade[i].Curso << endl << endl;
    }

    return 0;
}