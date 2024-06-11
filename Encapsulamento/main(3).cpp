// Crie uma classe chamada LIVRO que tenha os atributos TITULO (string), autor (string) e anoPublicacao (int). Adicione um metodo para exibir as infromacoes do livro. Instancie dois objetosda classe Livro com diferente valores e chame o metodo para exibir as informacoes de cada livro


#include <iostream>
#include <string>

using namespace std;

class Livro{
private:
  string titulo, autor;
  int anoPublicacao;

public:

  void setTitulo(string titulo){
    this -> titulo = titulo;
  }

  void setAutor(string autor){
    this -> autor = autor;
  }

  void setAnoPublicacao(int anoPublicacao){
    this -> anoPublicacao = anoPublicacao;
  }

  void exibirInfo(){
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Ano: " << anoPublicacao << endl;
  }

};

int main() {

Livro historia;
  historia.setTitulo("Livro de historia");
  historia.setAutor("Pedro");
  historia.setAnoPublicacao(2022);
  historia.exibirInfo();
  
Livro matematica;
  matematica.setTitulo("Livro de Matematica");
  matematica.setAutor("João");
  matematica.setAnoPublicacao(2023);
  matematica.exibirInfo();  
}