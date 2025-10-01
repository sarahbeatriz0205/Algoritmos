#include <iostream>

int perimetro(int l1, int l2){ 
    long long p = 2*static_cast<long long>(l1) + 2*static_cast<long long>(l2);
    return p;
}

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    long long calc = perimetro(l1, l2);
    std::cout << calc << std::endl;
    return 0;
}