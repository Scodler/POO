// Crie uma classe Pessoa com os atributos privados nome (string) e idade (int). Adicione uma classe Empresa que tenha um método friend void mostrarDetalhes(const Pessoa &p) que exibe os detalhes de uma pessoa. Crie um objeto da classe Pessoa, inicialize os atributos e use a funcao amiga da classe Empresa para exibir os detalhes da pessoa.

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
  string nome;
  int idade;
  friend class Empresa;

public:
  Pessoa(string nome, int idade){
    this -> nome = nome;
    this -> idade = idade;
  }

};

class Empresa{
public:
  void mostrarDetalhes(const Pessoa &p){
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
  }
};

int main(){
  Pessoa pessoa("Fernando", 20);
  Empresa empresa;
  empresa.mostrarDetalhes(pessoa);

  return 0;
}