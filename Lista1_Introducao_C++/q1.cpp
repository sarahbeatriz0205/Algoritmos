#include <iostream>

//função de soma
int soma(int a, int b){//receba a e b inteiros
    int r = a + b; //isso retorna o resultado inteiro independente do r
    return r; //retorne r
}

//principal
int main(){
    int a, b;
    std::cin >> a >> b;
    int s = soma(a, b);
    std::cout << s << std::endl;
    return 0;
}