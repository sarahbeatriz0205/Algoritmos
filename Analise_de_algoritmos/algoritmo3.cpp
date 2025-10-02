// Algoritmo 3 implementado - Questão 5

#include <chrono>
#include <iostream>
using namespace std;

bool primo(long long n){
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

    for (long long i = 3; i <= (n / 2); ++i){
        if (n % i == 0){
            qtd_divs = qtd_divs + 1;
        }
    }
    return qtd_divs == 1;
}

int main(){
    long long n;
    cin >> n;
    // Início do cronômetro
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = primo(n);

    // Fim
    auto end = std::chrono::high_resolution_clock::now();

    if (p)
        std::cout << n << " é primo :) " << std::endl;
    else
        std::cout << n << " não é primo :( " << std::endl;

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(dur);
    std::cerr << n << " Processing time: "
        << duration.count() << " ms "<< std::endl;
    return 0;
}