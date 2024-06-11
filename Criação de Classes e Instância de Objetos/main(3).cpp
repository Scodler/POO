// Crie uma classe chamada PESSOA que tenha os atributos NOME (string) e IDADE (int). Crie metrodos publicos para definir e obter os valores desses atributos. EM seguida crie um objeto da classe PESSOA, defina os valores de seus atributos e exiba-os no console

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
  int idade;
  string nome;

public:

  void setIdade(int idade){
    this -> idade = idade;
  }

  void setNome(string nome){
    this -> nome = nome;
  }

  int getIdade(){
    return idade;
  }

  string getNome(){
    return nome;
  }

};

int main() {
Pessoa pessoa;
pessoa.setIdade(18);
pessoa.setNome("Fernando");
cout << "Nome: " << pessoa.getNome() << endl;
cout << "Idade: " << pessoa.getIdade() << endl;
  
}