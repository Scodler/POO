//Crie uma classe chamada Produto que tenha um atributo estatico publico desconto (double). Adicione metodos estaticos definirDesconto(double valor) e obterDesconto() para definir e obter o valor do desconto. Instancie dois objetos da classe Produto e use os metodos estaticos para definir e obter o valor do desconto, demonstrando que o desconto é compartilhado entre todas as instancias.

#include <iostream>

using namespace std;

class Produto{
    public:
    static double desconto;

    static void definirDesconto(double valor){
        desconto = valor;
    }

    static double obterDesconto(){
        return desconto;
    }
};

double Produto::desconto;

int main(){
    Produto p1;
    Produto p2;

    Produto::definirDesconto(0.1);

    cout << "Desconto: " << Produto::obterDesconto() << endl;
    cout << "Desconto p1: " << p1.obterDesconto() << endl;
    cout << "Desconto p2: " << p2.obterDesconto() << endl;

    return 0;
}