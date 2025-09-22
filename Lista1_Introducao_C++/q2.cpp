#include <iostream>

int perimetro(int l1, int l2){ //por que aqui eu preciso dizer que l1 e l2 são inteiros separadamente e no main um int já basta?
    int p = (l1*2) + (l2*2);
    return p;
}

int main(){
    int l1, l2;
    std::cin >> l1 >> l2;
    int calc = perimetro(l1, l2);
    std::cout << calc << std::endl;
    return 0;
}