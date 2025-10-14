// Uma sublista contígua não decrescente é uma sequencia contígua em A onde todo elemento da lista é menor-igual ao seu sucessor.

#include <iostream>

int main(){
    long long tamanho;
    std::cout << "Defina o tamanho da lista";
    std::cin >> tamanho;
    long long numeros[tamanho];

    for (int i=0; i < tamanho; ++i){
        std::cin >> numeros[i];
    
}