#include <iostream>
#include <numeric>
using namespace std;

struct Fracao {
    public:
    int numerador, denominador;
    double valor_real() {
    double valor = static_cast<double>(numerador) / static_cast<double>(denominador);
    return valor;
    }
    void simplificar() {
        int mdc = std::gcd(numerador, denominador); // Máximo divisor comum em <numeric>
        numerador = numerador / mdc;
        denominador = denominador / mdc;
    }
    void adicionar(Fracao outra) {
        int novo_denominador = std::lcm(denominador, outra.denominador); // Mínimo múltiplo comum
        int novo_numerador = (novo_denominador / denominador) * numerador +
        (novo_denominador / outra.denominador) * outra.numerador;
        numerador = novo_denominador;
        denominador = novo_denominador;
    }
    Fracao soma(Fracao outra){
        Fracao resultado;
        resultado.denominador = std::lcm(denominador, outra.denominador);
        resultado.numerador = (resultado.denominador / denominador) * numerador +
        (resultado.denominador / outra.denominador) * outra.numerador;
        return resultado;
    }
};

int main(){
    Fracao f1, f2;
    cin >> f1.numerador >> f1.denominador; // lê os valores, acessa "numerador" e "denominador" e atrubui o valor lido a esses parâmetros
    cin >> f2.numerador >> f2.denominador;
    cout << f1.valor_real() << endl; // retorna o valor real dessa fração
    cout << f2.valor_real() << endl;
    f1.simplificar();
    f2.simplificar();
    f1.adicionar(f2);
    f2.adicionar(f1);
    Fracao f3 = f1.soma(f2);
    return 0;
}