// Crie uma classe chamada LIVRO que tenha os atributos TITULO (string), autor (string) e anoPublicacao (int). Adicione um metodo para exibir as infromacoes do livro. Instancie dois objetosda classe Livro com diferente valores e chame o metodo para exibir as informacoes de cada livro


#include <iostream>
#include <string>

using namespace std;

class Livro{
private:
  string titulo, autor;
  int anoPublicacao;

public:
  Livro(string titulo, string autor, int anoPublicacao){
    this -> titulo = titulo;
    this -> autor = autor;
    this -> anoPublicacao = anoPublicacao;
  }
  void exibirInfo(){
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Ano: " << anoPublicacao << endl;
  }

};

int main() {

Livro historia("Matematica", "Joao", 2023);
  historia.exibirInfo();
  
Livro matematica("Historia", "Pedro", 2020);
  matematica.exibirInfo();  
}