#include <chrono>
#include <iostream>
using namespace std;

bool primo(long long n){
    if (n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }

    // Supondo que n é primo:
    bool p = true;
    int d = 3;

    while (p and d <= (n / 2)){
        if (n % d){
            p = false;
        }
    d = d + 2;
    }
    return p;
}

int main(){
    long long n;
    cin >> n;
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