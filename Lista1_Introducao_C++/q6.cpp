#include <iostream>
using namespace std;

// vai servir para contar quantos divisores um número tem
int contagem_divisores(int n){
    int d=1, contador=1;
    while (d != n){
        if ((n % d) == 0)
            contador++; //contador = contador + 1
        d++; //d = d + 1
    }
    return contador;
}

int primo(int n){
    bool yes = true, no = false;
    int contagem = contagem_divisores(n);
    if (contagem == 2)
        return yes;
    else
        return no;
}

int main(){
    int n;
    cin >> n;
    int verificacao = primo(n);
    cout << verificacao << endl;
    return 0;
}