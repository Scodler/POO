// Crie duas classes, Ponto e Linha. A classe Ponto deve ter atributos privados x e y(ambos double). A classe Linha deve ter atributos privados ponto1 e ponto2 (ambos do tipo Ponto).Adicione um metodo friend double calcularComprimento(const Linha &l) na classe Linha que calcula e retorna o comprimento da linha usando os pontos. Instancie um objeto da classe Linha e use a funcao amiga para calcular seu comprimento.

#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    Ponto(double x = 0, double y = 0) : x(x), y(y) {}

    double getX() const { return x; }
    double getY() const { return y; }
};

class Linha {
private:
    Ponto ponto1;
    Ponto ponto2;

public:
    Linha(const Ponto &p1, const Ponto &p2) : ponto1(p1), ponto2(p2) {}

    friend double calcularComprimento(const Linha &l);
};

double calcularComprimento(const Linha &l) {
    double dx = l.ponto1.getX() - l.ponto2.getX();
    double dy = l.ponto1.getY() - l.ponto2.getY();
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Ponto p1(1, 2);
    Ponto p2(4, 6);
    Linha l(p1, p2);

    double comprimento = calcularComprimento(l);
    cout << "Comprimento da linha: " << comprimento << endl;

    return 0;
}