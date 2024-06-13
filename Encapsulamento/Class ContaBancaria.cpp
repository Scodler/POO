// Crie uma classe chamada ContaBancaria com os seguintes atributos privados: numeroConta(int), saldo(double) e titular (string). Adicione métodos públicos para definir e obter os valores desses atributos, além de um método depositar(double valor) que adiciona o valor ao saldo e um método sacar(double valor) que subtrai o valor do saldo, se houver saldo suficiente

#include <iostream>
#include <string>

using namespace std;

class ContaBancaria{
private:
  string nome;
  double saldo;
  int numeroconta;

public:
  void setNome(string nome){
    this -> nome = nome;
  }

  void setNumeroconta(int numeroconta){
    this -> numeroconta = numeroconta;
  }

  void deposito(double valor){
    if(saldo > 0){
      saldo += valor;
      cout << "Valor do deposito: " << valor << endl;
    } else{
      cout << "Valor invalido" << endl;
    }
  }

  void saque(double valor){
    if(valor > 0 && valor <= saldo){
      saldo -= valor;
      cout << "Valor do saque: " << valor << endl;
    } else{
      cout << "Saldo insuficiente" << endl;
    }
  }

  void exibirInfo(){
    cout << "Nome: " << nome << endl;
    cout << "Numero da conta: " << numeroconta << endl;
    cout << "Saldo: " << saldo << endl;
  }

};

int main() {
ContaBancaria conta;
  conta.setNome("Fernando");
  conta.setNumeroconta(1234);
  conta.deposito(5000);
  conta.saque(1000);
  conta.exibirInfo();

  return 0;
}