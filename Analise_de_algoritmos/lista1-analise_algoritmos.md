## Lista de Exercícios - Análise de Algoritmos
#### Questão 1:
a) Levando em consideração os tamanhos de n = 1 até n = 120, conclui-se que de n = 1 até n = 54, a equação A é melhor que a equação B. A partir de n = 55, a equação B é melhor que a equação A.

b) *Fazer um gráfico*


#### Questão 3:
```
Entrada: n ∈ N+
Saída: verdadeiro se n for primo. falso caso contrário.

Inicio
  divs ← 0 --------------------------------> 1
  para i ← 1 até n faça -------------------> 2n
    se n mod i = 0 então ------------------> 2(n-1) = 2n -2
      divs ← divs + 1 ---------------------> 2(n-1) = 2n-2
    fim se
  fim para --------------------------------> 2(n-1) 2n-2
  se divs = 2 então -----------------------> 1
    retorne verdadeiro --------------------> 1
  senão 
    retorne falso
  fim se
```
- 2(n-1) + 2(n-1) + 2(n-1) = 2n-2 + 2n-2 + 2n-2
- 1 + 2n + 2n - 2 + 2n - 2 + 2n - 2 + 1 + 1 = 1 + 8n -2 - 2 - 2 + 1 + 1 + 1
- 8n - 6 + 3
- 8n - 3

#### Questão 4:
~~~c++
#include <chrono>
#include <iostream>

bool prime(long long n) {
    int qtd_divisores = 0;
    for (long long d = 1; d <= n; ++d)
        if (n % d == 0)
            qtd_divisores = qtd_divisores + 1;
    return qtd_divisores == 2;
}

int main() {
    long long n;
    std::cin >> n;

    // Início do cronômetro (tempo em microsegundos para determinar se n é primo):
    auto beg = std::chrono::high_resolution_clock::now();
    bool p = prime(n);

    // Fim do cronômetro
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
~~~

| Testes | Tempo em milissegundos |
| :--------------------: | :-----: |
| 240000029  | 811 ms     |
| 480000077 |  1749 ms | 
| 720000103 | 2593 ms |
| 960000131 | 3331 ms |
| 1200000133 |  4391 ms |
1440000137 | 2908 ms |
1680000149 | 3604 ms |
1920000161 | 4343 ms |
2160000163 | 7678 ms |
2400000167 | 8448 ms |
2640000217 | 9293 ms |
2880000251 | 7739 ms |
3120000253 | 10903 ms |
3360000257 | 11780 ms |
3600000269 | 10371 ms |
3840000289 | 13564 ms |
4080000293 | 14388 ms |
4320000329 | 12848 ms |
4560000343 | 13642 ms |
4800000347 | 14594 ms |
5040000443 | 15388 ms |
5280000461 | 18784 ms |
5520000463 | 17083 ms |
5760000473 | 18194 ms |
6000000511 | 21368 ms |
6240000581 | 22167 ms |
6480000589 | 20491 ms |
6720000593 | 23917 ms |
6960000613 | 22234 ms |
7200000623 | 25598 ms |
7440000629 | 24096 ms |
7680000703 | 24659 ms
7920000707 |  25425 ms |
8160000721 | 26234 ms |
8400000727 | 27143 ms |
8640000749 |  28069 ms |
8880000757 | 28859 ms|
9120000809 | 29952 ms |
9360000827 |   17195 ms  | 

#### Questão 5:
- Equação Algoritmo 2: 4n + 3
```
# Algoritmo 2
Entrada: n ∈ N+
Saída: verdadeiro se n for primo. falso caso contrário.
  divs ← 0 ----------------------------------> 1
  para i ← 1 até n ÷ 2 faça -----------------> 2(n / 2)
    se n mod i = 0 então --------------------> 2(n / 2)
      divs ← divs + 1 -----------------------> 2(n / 2)
    fim se
  fim para ----------------------------------> 2(n / 2)
  se divs = 1 então -------------------------> 1
    retorne verdadeiro ----------------------> 1
  senão
    retorne falso
  fim se
```

```
# Dúvida para amanhã: se n = 1 for verdadeiro, na teoria, ele para. eu devo contar até com esse n = 1?
# Algoritmo 3
Entrada: n ∈ N+
Saída: verdadeiro se n for primo. falso caso contrário.
  se n = 1 então
    retorne falso
  fim se
  se n = 2 então
    retorne verdadeiro
  fim se
  se n mod 2 = 0 então
    retorne falso
  fim se
  q_divs ← 1 {1 é divisor de todos os naturais}
  para i ← 3 até n ÷ 2 passo 2 faça
      se n mod i = 0 então
        q_divs ← q_divs + 1
      fim se
  fim para
  retorne q_divs = 1
```

| Testes | Tempo em milissegundos |
| :--------------------: | :-----: |
| 240000029  | 474 ms     |
| 480000077 | 917 ms  | 
| 720000103 | 1389 ms |
| 960000131 | 1863 ms |
| 1200000133 |  2295 ms |
|1440000137 | 2932 ms |
|1680000149 | 3280 ms |
|1920000161 | 3752 ms |