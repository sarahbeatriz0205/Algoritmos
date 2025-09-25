// Algoritmo 3 implementado - Questão 5

#include <iostream>
using namespace std;

int primo(int n){
    int qtd_divs = 1;
    // verificações iniciais
    if (n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }

    for (int i = 3; i <= (n / 2); ++i){
        if (n % i == 0){
            qtd_divs = qtd_divs + 1;
        }
    }
    return qtd_divs = 1;
}

int main(){
    int n;
    cin >> n;
    int x = primo(n);
    cout << x << endl;
    return 0;
}