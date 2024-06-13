// Crie uma classe chamada Caixa com os atributos privados comprimento (double),largura (double) e altura (double). Adicione um metodo friend double calcularVolume(const Caixa &c) que calcula e retorna o volume da caixa. Em seguida, instancie um objeto da classe Caixa, inicialize os atributos e use a funcao amiga para calcular o volume.

#include <iostream>
#include <string>

using namespace std;

class Caixa{
private:
  double comprimento, largura, altura;

public:
  Caixa(double c, double l, double a){
    this -> comprimento = c;
    this -> largura = l;
    this -> altura = a;
  }

  friend double calcularVolume(const Caixa &c);
};

double calcularVolume(const Caixa &c){
  return c.comprimento * c.largura * c.altura;
}

int main() {
  Caixa caixa(10, 5, 3);
    double volume = calcularVolume(caixa);
    cout << "Volume da caixa: " << volume << " metros cubicos" << endl;

return 0;
}