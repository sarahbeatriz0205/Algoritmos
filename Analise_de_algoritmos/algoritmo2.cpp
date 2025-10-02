// Algoritmo 2 implementado -  Questão 5

#include <chrono>
#include <iostream>
using namespace std;

bool primo(long long n){
    int div = 0;
    for (long long i = 1; i <= (n / 2); ++i){
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