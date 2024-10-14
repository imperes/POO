#include <iostream>
// #include <string>

using namespace std;

class Elevador {
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

public:
    // Construtor
    Elevador(int capacidade, int totalAndares) : capacidade(capacidade), totalAndares(totalAndares) {
        andarAtual = 0; // Térreo
        pessoasPresentes = 0;
    }

    // Métodos para acessar os atributos
    int getAndarAtual() const {
        return andarAtual;
    }

    int getTotalAndares() const {
        return totalAndares;
    }

    int getCapacidade() const {
        return capacidade;
    }

    int getPessoasPresentes() const {
        return pessoasPresentes;
    }

    // Método para adicionar uma pessoa
    void entra() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
            cout << "Uma pessoa entrou no elevador. Total de pessoas: " << pessoasPresentes << endl;
        } else {
            cout << "Elevador cheio. Ninguém pode entrar." << endl;
        }
    }

    // Método para remover uma pessoa
    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
            cout << "Uma pessoa saiu do elevador. Total de pessoas: " << pessoasPresentes << endl;
        } else {
            cout << "Elevador vazio. Ninguém para sair." << endl;
        }
    }

    // Método para subir um andar
    void sobe() {
        if (andarAtual < totalAndares) {
            andarAtual++;
            cout << "Elevador subiu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador já está no último andar." << endl;
        }
    }

    // Método para descer um andar
    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
            cout << "Elevador desceu para o andar: " << andarAtual << endl;
        } else {
            cout << "Elevador já está no térreo." << endl;
        }
    }
};

int main() {
    // Exemplo de uso
    Elevador elevador(5, 10); // Capacidade: 5 pessoas, Total de andares: 10 (excluindo térreo)

    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.desce();
    elevador.sai();
    elevador.sobe();

    return 0;
}
