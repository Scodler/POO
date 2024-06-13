// Crie uma classe base chamada Animal com um atributo nome (string) e um metodo falar() que exibe uma mensagem generica. Crie duas classes derivadas, Cachorro e Gato, que sobrescrevam o metodo falar() para exibir mensagens especıficas (por exemplo, ”Au Au” para Cachorro e ”Miau” para Gato). Instancie objetos de ambas as classes e chame o metodo falar().

#include <iostream>
#include <string>

using namespace std;

class Animal{
protected:
  string nome;

public:
  Animal(string nome){
    this  -> nome = nome;
  }

  virtual void falar(){
    cout << "Mensagem generica" << endl;
  }
};

class Cachorro : public Animal{
public:
  Cachorro(string nome) : Animal(nome){}

  void falar() override{
    cout << "Au Au eu sou um " << nome << endl;
  }
};

class Gato : public Animal{
public:
  Gato(string nome) : Animal(nome){}

  void falar() override{
    cout << "Miau eu sou um " << nome << endl;
  }
};

int main(){
  Cachorro cachorro("cachorro");
  cachorro.falar();

  Gato gato("gato");
  gato.falar();

  return 0;
}