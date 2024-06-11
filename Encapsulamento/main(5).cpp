//Crie uma classe chamada Produto com os atributos privados nome (string), preco(double) e quantidadeEstoque (int). Adicione metodos publicos para definir e obter os valores desses atributos, alem de um metodo reporEstoque(int quantidade) que adiciona a quantidade ao estoque e um metodo retirarEstoque(int quantidade) que subtrai a quantidade do estoque, se houver quantidade suficiente.

#include <iostream>
#include <string>

using namespace std;

class Produto{
private:
  string nome;
  double preco;
  int quantidadeEstoque;

public:
  void setNome(string nome){
    this -> nome = nome;
  }

  void setPreco(double preco){
    this -> preco = preco;
  }

  void setQuantidadeEstoque(int quantidadeEstoque){
    this -> quantidadeEstoque = quantidadeEstoque;
  }

  void reporEstoque(int quantidade){
    quantidadeEstoque += quantidade;
  }

  void retirarEstoque(int quantidade){
    if(quantidade > 0 && quantidade <= quantidadeEstoque){
      quantidadeEstoque -= quantidade;
    } else {
      cout << "Valor invalido" << endl;
    }
  }

  void exibirInfo(){
    cout << "Nome: " << nome << endl;
    cout << "Preço: " << preco << endl;
    cout << "Quantidade em estoque: " << quantidadeEstoque << endl;
  }
};

int main() {
  Produto produto;
    produto.setNome("Bola");
    produto.setPreco(80);
    produto.setQuantidadeEstoque(200);

    produto.reporEstoque(10);
    produto.retirarEstoque(50);

    produto.exibirInfo();

return 0;  
}