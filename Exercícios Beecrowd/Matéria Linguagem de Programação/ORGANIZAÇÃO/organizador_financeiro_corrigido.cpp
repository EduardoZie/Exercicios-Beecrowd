#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Transacao {
    string tipo;
    string descricao;
    double valor;
    string comentario;
};

const string ARQUIVO = "ORGANIZADOR_FINANCEIRO.txt";

void limparEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int lerOpcao() {
    int opcao;

    while (!(cin >> opcao)) {
        cout << "Digite somente um numero: ";
        limparEntrada();
    }

    limparEntrada();
    return opcao;
}

double lerValor() {
    double valor;

    while (true) {
        cout << "Valor: ";
        if (cin >> valor && valor >= 0) {
            limparEntrada();
            return valor;
        }

        cout << "Valor invalido. Use por exemplo: 10.50\n";
        limparEntrada();
    }
}

vector<Transacao> carregarTransacoes() {
    vector<Transacao> transacoes;
    ifstream arquivo(ARQUIVO);

    string linha;

    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        Transacao t;
        string valorTexto;

        if (getline(ss, t.tipo, ';') &&
            getline(ss, t.descricao, ';') &&
            getline(ss, valorTexto, ';') &&
            getline(ss, t.comentario)) {

            try {
                t.valor = stod(valorTexto);
                transacoes.push_back(t);
            } catch (...) {
                cout << "Uma linha do arquivo foi ignorada por estar invalida.\n";
            }
        }
    }

    return transacoes;
}

void salvarTransacoes(const vector<Transacao>& transacoes) {
    ofstream arquivo(ARQUIVO);

    for (size_t i = 0; i < transacoes.size(); i++) {
        arquivo << transacoes[i].tipo << ";"
                << transacoes[i].descricao << ";"
                << transacoes[i].valor << ";"
                << transacoes[i].comentario << "\n";
    }
}

void pausar() {
    cout << "\nPressione ENTER para voltar ao menu...";
    string texto;
    getline(cin, texto);
}

void mostrarMenu() {
    cout << "\n========== ORGANIZADOR FINANCEIRO ==========\n";
    cout << "1 - Adicionar Receita\n";
    cout << "2 - Adicionar Despesa\n";
    cout << "3 - Listar Transacoes\n";
    cout << "4 - Ver Saldo Atual\n";
    cout << "5 - Ver Gastos por Categoria\n";
    cout << "6 - Salvar Dados\n";
    cout << "0 - Sair\n";
    cout << "Opcao: ";
}

int main() {
    vector<Transacao> transacoes = carregarTransacoes();
    int opcao = -1;

    while (opcao != 0) {
        mostrarMenu();
        opcao = lerOpcao();

        if (opcao == 1 || opcao == 2) {
            Transacao t;

            if (opcao == 1) {
                t.tipo = "Receita";
                cout << "Descricao/origem: ";
            } else {
                t.tipo = "Despesa";
                cout << "Categoria/descricao: ";
            }

            getline(cin, t.descricao);
            t.valor = lerValor();

            cout << "Comentario: ";
            getline(cin, t.comentario);

            transacoes.push_back(t);
            salvarTransacoes(transacoes);

            cout << t.tipo << " adicionada com sucesso!\n";
            pausar();
        }
        else if (opcao == 3) {
            if (transacoes.empty()) {
                cout << "Nenhuma transacao registrada.\n";
            } else {
                cout << fixed << setprecision(2);

                for (size_t i = 0; i < transacoes.size(); i++) {
                    cout << "[" << i + 1 << "] "
                         << transacoes[i].tipo << " | "
                         << transacoes[i].descricao << " | R$ "
                         << transacoes[i].valor << " | "
                         << transacoes[i].comentario << "\n";
                }
            }

            pausar();
        }
        else if (opcao == 4) {
            double saldo = 0;

            for (size_t i = 0; i < transacoes.size(); i++) {
                if (transacoes[i].tipo == "Receita") {
                    saldo += transacoes[i].valor;
                } else {
                    saldo -= transacoes[i].valor;
                }
            }

            cout << fixed << setprecision(2);
            cout << "Saldo atual: R$ " << saldo << "\n";
            pausar();
        }
        else if (opcao == 5) {
            map<string, double> gastos;

            for (size_t i = 0; i < transacoes.size(); i++) {
                if (transacoes[i].tipo == "Despesa") {
                    gastos[transacoes[i].descricao] += transacoes[i].valor;
                }
            }

            if (gastos.empty()) {
                cout << "Nenhuma despesa registrada.\n";
            } else {
                cout << fixed << setprecision(2);
                cout << "--- Gastos por categoria ---\n";

                for (map<string, double>::iterator it = gastos.begin();
                     it != gastos.end(); ++it) {
                    cout << it->first << ": R$ " << it->second << "\n";
                }
            }

            pausar();
        }
        else if (opcao == 6) {
            salvarTransacoes(transacoes);
            cout << "Dados salvos com sucesso!\n";
            pausar();
        }
        else if (opcao == 0) {
            salvarTransacoes(transacoes);
            cout << "Saindo...\n";
        }
        else {
            cout << "Opcao invalida.\n";
            pausar();
        }
    }

    return 0;
}