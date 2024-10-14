#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
    string nome;
    unsigned int idade;
    float altura;
public:
    Pessoa(string nome,unsigned int idade, float altura){
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }
    string getName(){
        return this->nome;
    }
    unsigned int getIdade(){
        return this->idade;
    }
    float getAltura(){
        return this->altura;
    }
};

int main()
{
    string nome;
    unsigned int idade;
    float altura;
    cout << "Nome: " << endl;
    getline(cin, nome);
    cout << "Idade: " << endl;
    cin >> idade;
    cout << "Altura: " << endl;
    cin >> altura;

    Pessoa RG (nome, idade, altura);
    cout << "Nome: " << RG.getName() << endl;
    cout << "Idade: " << RG.getIdade() << endl;
    cout << "Altura: " << RG.getAltura() << endl;
    return 0;
}
