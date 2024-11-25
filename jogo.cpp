#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Loteria {
private:
    std::vector<int> numerosSorteados;
    int maxNumeros;
    int maxValor;

public:
    // Construtor
    Loteria(int maxNumeros, int maxValor) : maxNumeros(maxNumeros), maxValor(maxValor) {
        std::srand(std::time(0)); // Inicializa o gerador de números aleatórios
        sortearNumeros();
    }

    // Método para sortear números
    void sortearNumeros() {
        numerosSorteados.clear();
        while (numerosSorteados.size() < maxNumeros) {
            int num = std::rand() % maxValor + 1;
            if (std::find(numerosSorteados.begin(), numerosSorteados.end(), num) == numerosSorteados.end()) {
                numerosSorteados.push_back(num);
            }
        }
    }

    // Método para verificar os números do jogador
    int verificarNumeros(const std::vector<int>& numerosJogador) {
        int acertos = 0;
        for (int num : numerosJogador) {
            if (std::find(numerosSorteados.begin(), numerosSorteados.end(), num) != numerosSorteados.end()) {
                acertos++;
            }
        }
        return acertos;
    }

    // Método para exibir os números sorteados
    void exibirNumerosSorteados() {
        std::cout << "Números sorteados: ";
        for (int num : numerosSorteados) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int maxNumeros = 5;
    int maxValor = 50;
    Loteria loteria(maxNumeros, maxValor);

    std::vector<int> numerosJogador = {1, 15, 23, 34, 45};

    std::cout << "Seus números: ";
    for (int num : numerosJogador) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    loteria.exibirNumerosSorteados();

    int acertos = loteria.verificarNumeros(numerosJogador);
    std::cout << "Você acertou " << acertos << " números!" << std::endl;

    return 0;
}
