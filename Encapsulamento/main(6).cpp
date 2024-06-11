// Crie uma classe chamada Carro com os atributos privados marca (string), modelo(string) e ano (int). Adicione metodos publicos para definir e obter os valores desses atributos, alem de um metodo exibirDetalhes() que exibe todas as informacoes do carro

#include <iostream>
#include <string>

using namespace std;

class Carro{
private:
  string marca, modelo;
  int ano;

public:
  void setMarca(string marca){
    this -> marca = marca;
  }

  void setModelo(string modelo){
    this -> modelo = modelo;
  }

  void setAno(int ano){
    this -> ano = ano;
  }

  void exibirDetalhes(){
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
  }
};

int main(){
  Carro palio;
    palio.setMarca("Fiat");
    palio.setModelo("Palio");
    palio.setAno(2004);
    palio.exibirDetalhes();

return 0;
}