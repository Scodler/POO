// Crie uma classe chamada Funcionario com os atributos privados nome (string), cargo(string) e salario (double). Adicione metodos publicos para definir e obter os valores desses atributos,alem de um metodo aumentarSalario(double percentual) que aumenta o salario do funcionario em um percentual especificado.

#include <iostream>
#include <string>

using namespace std;

class Funcionario{
private:
  string nome, cargo;
  double salario;

public:
  Funcionario(string nome, string cargo, double salario){
    this -> nome = nome;
    this -> cargo = cargo;
    this -> salario = salario;
  }

  void aumentarSalario(double percentual){
    salario += (salario * (percentual / 100));
  }

  void exibirDetalhes(){
    cout << "Nome: " << nome << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salario << endl;
  }
};

int main (){
  Funcionario funcionario("Fernando", "CEO", 40000 );
    funcionario.exibirDetalhes();

return 0;
}