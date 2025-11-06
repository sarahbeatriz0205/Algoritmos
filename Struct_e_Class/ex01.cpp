#include <iostream>
using namespace std;

struct Fracao{
    public: // desnecessário nesse caso, mas é só pra eu lembrar que existe
    int numerador, denominador;
    double valor_real(){
        double valor = static_cast<double>(numerador)/static_cast<double>(denominador); // static_cast<tipo-de-dado> significa "converta esse valor especificado nos parênteses para esse tipo de dado que eu tô especificando"
        return valor;
    };
};

int main(){
    Fracao f1, f2; // declara f1 e f2 como dados do tipo Fracao. ambos se tornam uma fração
    cin >> f1.numerador >> f1.denominador; // lê os valores, acessa "numerador" e "denominador" e atrubui o valor lido a esses parâmetros
    cin >> f2.numerador >> f2.denominador;
    cout << f1.valor_real() << endl; // retorna o valor real dessa fração
    cout << f2.valor_real() << endl;
    return 0;
}