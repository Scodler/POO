// Crie uma classe base chamada Veiculo com atributos marca (string) e modelo (string), e um metodo exibirDetalhes() que exibe as informacoes do veıculo. Crie uma classe derivada chamada Carro que adicione um atributo numeroPortas (int). Sobrescreva o metodo exibirDetalhes() na classe Carro para incluir o numero de portas. Crie um objeto da classe Carro e chame o metodo exibirDetalhes()

#include <iostream>
#include <string>

using namespace std;

class Veiculo{
protected:
  string marca, modelo;

public:
  Veiculo(string marca, string modelo){
    this -> marca = marca;
    this -> modelo = modelo;
  }

  virtual void exbirDetalhes(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
  }
};

class Carro : public Veiculo {
private:
  int numeroPortas;

public:
  Carro(string marca, string modelo, int numeroPortas) : Veiculo(marca, modelo){
    this -> numeroPortas = numeroPortas;
  }
  
  void exbirDetalhes() override{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "NumeroPortas: " << numeroPortas << endl;
  }
};

int main(){
  Carro carro("Fiat", "Marea", 4);
  carro.exbirDetalhes();

  return 0;
}