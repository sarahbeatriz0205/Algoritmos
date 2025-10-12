#include <iostream>
#include <cstdlib>

int main(){
    int tamanho;
    std::cout << "Insira o tamanho do seu array: "; std::cin >> tamanho;
    int numeros[tamanho];
    for (int i=0; i < tamanho; ++i){
        std::cin >> numeros[i]; // tá acessando a lista
    }
    
    int primeiro_maior_valor = numeros[0] - numeros[1]; // diz que o maior valor é a diferença dessa subtração, para fins de comparação
    
    for (int i=1; i < tamanho-1; ++i){
        int valor_abs = std::abs(numeros[i] - numeros[i+1]); // os valores absolutos
        // std::cout << valor_abs << std::endl;
        if (valor_abs > primeiro_maior_valor){
        primeiro_maior_valor = valor_abs;
    }
    }
    std::cout << primeiro_maior_valor << std::endl;
    return 0;
}
// cout << numeros[i] << endl; -> imprime os valores da lista