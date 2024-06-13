// Crie uma classe chamada PESSOA que tenha os atributos NOME (string) e IDADE (int). Crie metrodos publicos para definir e obter os valores desses atributos. EM seguida crie um objeto da classe PESSOA, defina os valores de seus atributos e exiba-os no console

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
  int idade;
  string nome;

public:
  Pessoa(string nome, int idade){
    this -> nome = nome;
    this -> idade = idade;
  }

  void exibirInfo(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
  }

};

int main() {
  Pessoa pessoa("Fernando", 20);
  pessoa.exibirInfo();
  
  
}