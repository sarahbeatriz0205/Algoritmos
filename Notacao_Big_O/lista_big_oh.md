# Lista de exercícios 1 - Notação Big O
## Aluna: Sarah Beatriz Barbosa do Nascimento
### Questão 1
- A expressão **n^2 + 2^n+2** é **O(2^n)**, pois a taxa de crescimento dessa expressão é **exponencial**.
###  Questão 2
### Questão 3
```
# Algoritmo
Entrada:
Tamanho: inteiro com a quantidade de elementos do array
Numeros: array de tamanho elementos

Saída
Maior valor: inteiro com a maior diferença entre pares consecutivos do array

Variáveis 
Numeros[ ]: inteiros
i: inteiro 
Maior valor: inteiro
Valor absoluto: inteiro

Início
Tamanho <- quantidade de elementos do array --> 1
Numeros[tamanho] --> 1
Para i <- 0 até tamanho faça --> 2n
      Numeros[i] <- elementos do array --> n
Fim para
Maior valor <- Numeros[0] + Numeros[1] --> 1
Para i <- 1 até tamanho-1 faça --> n - 1
      Valor absoluto <- abs(Numeros[i] - Numeros[i + 1] --> n - 1
       Se Valor absoluto > Maior valor faça --> n
                  Maior valor <- Valor absoluto --> n
       Fim se
Fim para
Fim
```

**a) Equação T(n) -> 5n + 3**

**b)**

**c) Implementação em C++**

~~~c++
#include <iostream>
#include <cstdlib> // biblioteca pra utilizar o abs()

int main(){
    int tamanho;
    std::cout << "Insira o tamanho do seu array: "; std::cin >> tamanho; // para inserir o tamanho do array
    int numeros[tamanho]; // define o tamanho do array como tamanho
    for (int i=0; i < tamanho; ++i){
        std::cin >> numeros[i]; // para o usuário inserir os valores no array
    }
    
    int primeiro_maior_valor = numeros[0] - numeros[1]; // diz que o maior valor é a diferença dessa subtração, para fins de comparação
    
    for (int i=1; i < tamanho-1; ++i){
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

**d)**

### Questão 4


