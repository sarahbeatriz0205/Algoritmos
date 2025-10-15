# Lista de exercícios 1 - Notação Big O
## Aluna: Sarah Beatriz Barbosa do Nascimento
### Questão 1
- A expressão **n^2 + 2^n+2** é **O(2^n)**, pois a taxa de crescimento dessa expressão é **exponencial**.
- n^2 + 2^n+2 = n^2 + 2^n * 2^2 = n^2 + 2^n (elimino o que cresce menos (n^2)) = 2^n 
###  Questão 2
- Mais rápidas em ordem crescente: **log2n, n, nlog2n, n², n³, 2^n**
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

**a) Equação T(n) -> 5n + 3 ---> é O(n)**

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
~~~c++
// Resolução do professor
int maior_diferenca(int a[], int n){
    int mdif = a[1] - a[0]; // 1
    for (int i=2; i<n; ++i){ // 2(n-2)
        if (a[i] - a[i-1] < mdif){ // 4(n-2)
            mdif = a[i] - a[i-1]; // 4(n-2)
        }
    }
    return mdif; // 1

    // 10n - 15 é O(n)
}
~~~

**d)**

### Questão 4
### Questão 5
### Questão 6
a) O(2^n)

b) O(n)

c) O(n^2)

d) O(log2n)

### Questão 7
- observar a qtd de vezes que ele faz o laço em função da entrada
~~~c++
b) int fB(int n){
int i, a=1;
for ( i=1 ; i<=n ; i∗=2 ){
a += i;
}
return a;
}
// O(log2n)
~~~
~~~c++
c) int fC(int n){
int i,j,x=1,y;
for ( i=0 ; i<n ; i++ ){
y = 2;
for ( j=1 ; j<=n ; j++ ){
y+=j;
}
x∗=y;
}
return x;
}
// O(n²)
~~~
~~~c++
d) int fD(int n){
int i,x=n,y=0;
for ( i=0 ; i<512 ; i++ ){
y+=x;
if ( i%7==0 && i<2∗n )
x++;
}
return y;
}
// constante -> 1, pois o laço não será afetado pela entrada
~~~
~~~c++
e) int fE(int n){
int i,j,x=1,y=0;
for ( i=n ; i>0 ; i=i/2 ){ // log2n vezes
y+=x;
for ( j=0 ; j<n/2 ; j++ ){ // log2n vezes
if ( n%j==0 )
y++;
}
}
return y;
}
// O(nlog2n)
~~~

