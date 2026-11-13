#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
int main(){
    ///while(true){

    string nome;
    int idade;
    int N1, N2, N3, NT1, NT2, NT3, NF;   /// Notas de provas e trabalhos
    double MediaP, MediaT, MediaF;  /// Media provas, trabalhos e Media final
    string ESTADOfreq;  /// Relacionado a frequencia
    string EstadoAR; /// Estado aprovação ou reprovação
    string MSGerror1 = "Erro de digitacao! Reiniciando...", MSGerror2 = "Erro de digitacao na nota do exame! Reiniciando...", MSGerror3;
    string ENSINO;
    int Nexame, MediaFexm;
    
    cout << endl;
    cout << "Programa de Medias dos alunos. " << endl;
    cout << "A media e calculada da seguinte forma:"  << endl;
    cout << " * Serao realizadas 3 provas e 3 trabalhos complementares, cada um possui um peso na media final do aluno." << endl;
    cout << " * As notas devem ser de  0 a 100." << endl;
    cout << " * Sera feita a divisao da soma das 3 provas e divisao pela quantidade de provas ou seja 3 da mesma forma sera feito com os trabalhos complementares." << endl;
    cout << " * Quanto o calculo da media final do aluno: Media das provas com o peso 6 e Media dos trabalhos com o peso de 4 apos realizadas as multiplicacoes somas e a divisao po 10." << endl;
    cout << endl;
    
    cout <<"Digite o nome do aluno:" << endl;
    getline(cin, nome); /// SERVE PARA ACEITAR MAIS DE UM NOME
    cout <<"Digite a idade do aluno: " << endl;
    cin >> idade;
    if (idade < 0 || idade > 100){
        cout <<"ERRO DE DIGITACAO DE IDADE!" << endl;
        cout <<"REINICIANDO O PROGRAMA..." << endl;
        Sleep(3000);
        return 0;
        ///continue;
    }
    cout <<"Digite a primeira nota do semestre:" << endl;
    cin >> N1;
    if (N1 < 0 || N1 > 100){
        cout << MSGerror1 << endl;
        return 0;
    }
    cout <<"Digite a segunda nota do semestre:" << endl;
    cin >> N2;
    if (N2 < 0 || N2 > 100){
        cout << MSGerror1 << endl;
        return 0;}
    cout <<"Digite a terceira nota do semestre:" << endl;
    cin >> N3;
    if (N3 < 0 || N3 > 100){
        cout << MSGerror1 << endl;
        return 0;}
    cout <<"Digite a nota do primeiro trabalho complementar:" << endl;
    cin >> NT1;
    if (NT1 < 0 || NT1 > 100){
        cout << MSGerror1 << endl;
        return 0;}
    cout <<"Digite a nota do segundo trabalho complementar:" << endl;
    cin >> NT2;
    if (NT2 < 0 || NT2 > 100){
        cout << MSGerror1 << endl;
        return 0;}
    cout <<"Digite a nota do terceiro trabalho complementar:" << endl;
    cin >> NT3;
    if (NT3 < 0 || NT3 > 100){
        cout << MSGerror1 << endl;
        return 0;}
    cout <<"Digite o numero de faltas do aluno para a realizacao da checagem de percentual de presenca:" << endl;
    cin >> NF;
    if (NF < 0){
        cout << MSGerror1 << endl;
        return 0;}
    
    /// CHECAGEM DE IDADE E ENSINO
    if (idade < 6){
        ENSINO = "Ensino Pre escolar";
    }else if (idade >= 6 && idade <= 14){
        ENSINO = "Ensino Fundamental";
    }else if (idade >= 15 && idade <=17){
        ENSINO = "Ensino Medio";
    }else{
        ENSINO = "Ensino Medio, com reprovacao";
    }


    
    /// CALCULO MEDIAS 1
        MediaP = (N1+N2+N3) / 3.0;
        MediaT = (NT1+NT2+NT3) / 3.0;
        MediaF = ((MediaP*6 + MediaT*4)/10) ;

    ///MEDIAFINAL
    if (MediaF>= 70){
        EstadoAR = "Aprovado";
    }else{
        EstadoAR = "Reprovado";
    }

    /// MEDIA EXAME
    if (MediaF >= 50 && MediaF < 70){
        cout << "Aluno em Exame! " << endl;
        cout << "Digite a nota do exame: " << endl;
        cin >> Nexame;
        if (Nexame < 0 || Nexame > 100){
            cout << MSGerror2 << endl;
            return 0;
        }
        MediaFexm = (MediaF + Nexame) / 2;
        if (MediaFexm >= 80){
            EstadoAR = "Aluno Aprovado em exame";
        }else{
            EstadoAR = "Aluno Reprovado em exame";
        }
        
    }

    ///PRESENÇA
    if (NF>=20){
        ESTADOfreq = "Frequancia Abaixo do esperado";
        EstadoAR = "Reprovado por infrequencia";
    }else{
        ESTADOfreq = "Frequencia adequada";
    }
    

    ///SAÍDA
    cout << endl;
    cout << "Nome do aluno: " << nome << endl;
    cout << "Educacao basica sendo cursada: " << ENSINO << endl;
    cout << "Numero de Faltas: " << NF << endl;
    cout << "Frequencia: " << ESTADOfreq << endl;

    cout << "Notas Provas: " << N1 << ", " << N2 << ", " << N3 << "." << endl;
    cout << "Notas Trabalhos: " << NT1 << ", " << NT2 << ", " << NT3 << "." << endl;

    cout << fixed << setprecision(0) << "Media Final: " << MediaF << endl;
    cout << "Situacao do aluno: " << EstadoAR << endl;

    ///continue;
    return 0;
     ///break; // só sai se tudo der certo
    }
