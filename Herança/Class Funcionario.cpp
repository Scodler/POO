// Crie uma classe base chamada Funcionario com atributos nome (string) e salario(double). Adicione um metodo aumentarSalario(double percentual) que aumenta o salario do funcionario. Crie duas classes derivadas, Gerente e Assistente, que sobrescrevam o metodo aumentarSalario() para aplicar percentuais diferentes de aumento (por exemplo, 10% para Gerente e 5% para Assistente). Instancie objetos de ambas as classes e teste o metodo aumentarSalario().

#include <iostream>
#include <string>

using namespace std;

class Funcionario{
protected:
  string nome;
  double salario;

public:
  Funcionario(string nome, double salario){
    this -> nome = nome;
    this -> salario = salario;
  }

  virtual void aumentarSalario(double percentual){
    salario += salario * percentual/100;
  }

  virtual void exibirInfo(){
    cout << "Nome: " << nome << endl;
    cout << "Salario: " << salario << endl;
  }
  
};

class Gerente : public Funcionario{
public:
  Gerente(string nome, double salario) : Funcionario(nome, salario){}

  void aumentarSalario(double percentual = 10) override{
    salario += salario * (percentual/100);
  }
};

class Assistente : public Funcionario{
public:
  Assistente(string nome, double salario) : Funcionario(nome, salario){}

  void aumentarSalario(double percentual = 5) override{
    salario += salario * (percentual/100);
  }
};

int main(){
  Gerente gerente("Fernando", 20000);
  gerente.exibirInfo();

  Assistente assistente("Joao", 5000);
  assistente.exibirInfo();
  
  return 0;
}