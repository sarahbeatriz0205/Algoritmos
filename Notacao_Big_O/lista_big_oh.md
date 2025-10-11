# Lista de exercícios 1 - Notação Big O
## Aluna: Sarah Beatriz Barbosa do Nascimento
### Questão 1
- A expressão **n^2 + 2^n+2** é **O(2^n)**, pois a taxa de crescimento dessa expressão é **exponencial**.
###  Questão 2
### Questão 3
~~~c++
// em C++, com comentários para eu entender o que eu mesma fiz
#include <iostream>
#include <cstdlib>

int main(){
    int tamanho;
    std::cout << "Insira o tamanho do seu array: "; std::cin >> tamanho; // para inserir o tamanho do array
    int numeros[tamanho]; // define o tamanho do array como tamanho
    for (int i=0; i < tamanho; ++i){
        std::cin >> numeros[i]; // para o usuário inserir os valores no array
    }
    
    int primeiro_maior_valor = numeros[0] - numeros[1]; // diz que o maior valor é a diferença dessa subtração, para fins de comparação
    
    for (int i=0; i < tamanho-1; ++i){
        int valor_abs = std::abs(numeros[i] - numeros[i+1]); // os valores absolutos

        // define qual é a maior diferença
        if (valor_abs > primeiro_maior_valor){
        primeiro_maior_valor = valor_abs;
    }
    }
    std::cout << primeiro_maior_valor << std::endl;
    return 0;
}
~~~
a) Equação T(n) -> 2n