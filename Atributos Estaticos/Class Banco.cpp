// Crie uma classe chamada Banco que tenha um atributo estatico privado taxaJuros (double). Adicione metodos estaticos publicos definirTaxaJuros(double valor) e obterTaxaJuros() para definir e obter o valor da taxa de juros. Crie alguns objetos da classe Banco e utilize os metodos estaticos para definir e obter a taxa de juros, demonstrando que a taxa é compartilhada entre todas as instancias.

#include <iostream>

using namespace std;

class Banco{
    private:
    static double taxaJuros;

    public:
    static void definirTaxaJuros(double valor){
        taxaJuros = valor;
    }

    static double obterTaxaJuros(){
        return taxaJuros;
    }
};

double Banco::taxaJuros;

int main(){
    Banco banco1, banco2, banco3;
    
    Banco::definirTaxaJuros(0.2);

    cout << "Taxa de Juros: " << Banco::obterTaxaJuros() << endl;
    cout << "Taxa de Juros banco1: " << banco1.obterTaxaJuros() << endl;
    cout << "Taxa de Juros banco2: " << banco2.obterTaxaJuros() << endl;
    cout << "Taxa de Juros banco3: " << banco3.obterTaxaJuros() << endl;

    return 0;
}

