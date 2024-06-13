// Crie uma classe chamada Sistema que tenha um atributo estatico privado versao (string). Adicione um metodo estatico publico definirVersao(string novaVersao) que define o valor da versao e um metodo estatico publico obterVersao() que retorna o valor da versao. Instancie alguns objetos da classe Sistema e use os metodos estaticos para definir e obter a versao do sistema, mostrando que a versao é compartilhada entre todas as instancias.

#include <iostream>
#include <string>

using namespace std;

class Sistema{
    private:
    static string versao;

    public:
    static void definirVersao(string novaVersao){
        versao = novaVersao;
    }

    static string obterVersao(){
        return versao;
    }
};

string Sistema::versao;

int main(){
    Sistema sistema1, sistema2, sistema3;

    Sistema::definirVersao("2.0.0");

    cout << "Versao do sistema: " << sistema1.obterVersao() << endl;
    cout << "Versao do sistema: " << sistema2.obterVersao() << endl;
    cout << "Versao do sistema: " << sistema3.obterVersao() << endl;



}