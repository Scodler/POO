// Crie uma classe Retangulo com os atributos privados largura e altura (ambos double). Adicione uma funcao amiga friend double calcularArea(const Retangulo &r) que retorna a area do retangulo. Instancie um objeto da classe Retangulo, inicialize os atributos e use a funcaoamiga para calcular a area.

#include <iostream>

using namespace std;

class Retangulo{
private:
  double largura, altura;

public:
  Retangulo(double largura, double altura){
    this -> largura = largura;
    this -> altura = altura;
  }

  friend double calcularArea(const Retangulo &r);
};

double calcularArea(const Retangulo &r){
  return r.largura * r.altura;
}

int main(){
  Retangulo retangulo(8, 4);
  double area = calcularArea(retangulo);
  cout << "Area: " << area << endl;

return 0;
}