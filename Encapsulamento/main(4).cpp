// Crie uma classe chamada Aluno com os atributos privados nome(string), matricula(int) e nota(float). Adicione métodos publicos para definir e obter os valores desses atributos. Além disso, adicione um método mostrarDados() que exibe todas as informações do aluno

#include <iostream>
#include <string>

using namespace std;

class Aluno{
private:
  string nome;
  int matricula;
  float nota;

public:
  void setNome(string nome){
    this -> nome = nome;
  }

  void setMatricula(int matricula){
    this -> matricula = matricula;
  }

  void setNota(float nota){
    this -> nota = nota;
  }

  void mostrarDados(){
    cout << "Nome: " << nome << endl;
    cout << "Matricula: "  << matricula << endl;
    cout << "Nota: " << nota << endl;
  }

};

int main() {
Aluno aluno;
  aluno.setNome("Pedro");
  aluno.setMatricula(12345);
  aluno.setNota(8.0);
  aluno.mostrarDados();
  
}