// Algoritmo 2 implementado -  Questão 5

#include <iostream>
using namespace std;

bool primo(int n){
    int div = 0;
    for (int i = 1; i <= (n / 2); ++i){
        if (n % i == 0){
            div = div + 1;
        }
    } 
    if (div == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    int x = primo(n);
    cout << x << endl;
    return 0;
}