// Algoritmo 1 implementado

#include <iostream>
using namespace std;

bool primo(int n){
    int div = 0;
    for (int i = 1; i <= n; ++i){
        if (n % i == 0){
            div = div + 1;
        }
    }
    if (div == 2){
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