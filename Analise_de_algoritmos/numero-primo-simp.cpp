#include <iostream>
#include <chrono>
#include <cmath>

bool primo(long long n){
    if (n==1){                          // 1
        return false;                   // 1
    }
    if (n==2){                          // 1
        return true;
    }

    // para fins de utilizar a notação big o, observar quantas vezes ele fará o laço
    for (long long d = 3; d*d<=n; ++d){ 
        if (n%d == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    std::cin >> n;

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