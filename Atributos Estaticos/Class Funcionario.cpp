// Crie uma classe chamada Funcionario que tenha um atributo estatico privado totalFuncionarios (int) que mantem a contagem de quantos funcionarios foram criados. Adicione um construtor que incremente totalFuncionarios a cada nova instancia da classe e um metodo estatico obterTotalFuncionarios() que retorna o valor de totalFuncionarios. Instancie alguns objetos da classe Funcionario e exiba o total de funcionarios criados.

#include <iostream>

using namespace std;

class Funcionario{
    private:
    static int totalFuncionarios;

    public:
    Funcionario(){
        totalFuncionarios++;
    }

    static int obtertotalFuncionarios(){
        return totalFuncionarios;
    }
};

int Funcionario::totalFuncionarios = 0;

int main(){

    Funcionario func1;
    Funcionario func2;
    Funcionario func3;
    Funcionario func4;
    Funcionario func5;
    Funcionario func6;

    cout << "Total de funcionarios: " << Funcionario::obtertotalFuncionarios() << endl;

    return 0;
}