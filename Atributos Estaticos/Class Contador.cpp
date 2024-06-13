// Crie uma classe chamada Contador que tenha um atributo estatico privado contador (int). Adicione um metodo publico incrementar() que incrementa o valor do contador em 1 e um metodo publico obterContador() que retorna o valor atual do contador. Instancie tres objetos da classe Contador, chame o metodo incrementar() em cada um deles e exiba o valor do contador apos cada chamada.

#include <iostream>

using namespace std;

class Contador{
    private:
    static int contador;

    public:
    void incrementar(){
        contador++;
    }

    int obterContador(){
        return contador;
    }
};

int Contador::contador;

int main(){
    Contador contador1;
    Contador contador2;
    Contador contador3;

    contador1.incrementar();
    cout << "Valor do contador 1: " << contador1.obterContador() << endl;

    contador2.incrementar();
    cout << "Valor do contador 2: " << contador2.obterContador() << endl;

    contador3.incrementar();
    cout << "Valor do contador 3: " << contador3.obterContador() << endl;



    return 0;
}