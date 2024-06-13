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
  Aluno(string nome, int matricula, float nota){
    this -> nome = nome;
    this -> matricula = matricula;
    this -> nota = nota;
  }

  void mostrarDados(){
    cout << "Nome: " << nome << endl;
    cout << "Matricula: "  << matricula << endl;
    cout << "Nota: " << nota << endl;
  }

};

int main() {
  Aluno aluno("Fernando", 12345, 10);
  aluno.mostrarDados();

  return 0;
}