## Lista de Exercícios - Análise de Algoritmos
### Aluno(a): Sarah Beatriz Barbosa do Nascimento
#### Questão 1:
a) Levando em consideração os tamanhos de n = 1 até n = 120, conclui-se que de n = 1 até n = 54, a equação A é melhor que a equação B, e a partir de n = 55, a equação B é melhor que a equação A.

b) *Fazer um gráfico*

#### Questão 2:
Com base na tabela de dados inseridos abaixo e considerando sempre o **pior caso**, a classíficação entre os algoritmos é a seguinte:
 | Classificação | Algoritmo |
| :-----------: | :-------------: |
| 1º | Algoritmo D (o mais rápido) |
| 2º | Algoritmo B |
| 3º | Algoritmo C |
| 4º | Algoritmo A (o mais lento) | 

##### Tabela de dados

|  Entrada | 2 | 4 | 6 | 8 | 10 | 12 | 14 | 16 | 18 | 20 |
| :-------:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| Algoritmo a | 9 | 7 | 5.78 | 6 | 10.24 | 26.4 | 79.5 | 250 | 800.13 | 2.611.44 |
| Algoritmo b | 470 | 490 | 510 | 530 | 550 | 570 | 590 | 610 | 630 | 650 |
| Algoritmo c | 20 | 46 | 88 | 146 | 220 | 310 | 416 | 538 | 676 | 830 |
| Algoritmo d | 520 | 540 | 551.7 | 560 | 566.44 | 571.7 | 576.15| 580 | 583.40 | 586.44|


b) Gráfico com as 4 equações

<img width="700" height="513" alt="Captura de tela 2025-09-27 123154" src="https://github.com/user-attachments/assets/82e7defa-a0a3-48d2-814c-e0405d20b363" />


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

| Testes | Algo 1 | Algo 2 | Algo 3
| :--------------------: | :-----: | :--------: | :-------: |
| 240000029  | 474 ms | 307 ms | 263 ms
| 480000077 | 917 ms  |  528 ms | 547 ms
| 720000103 | 1389 ms | 787 ms | 797 ms
| 960000131 | 1863 ms | 1052 ms | 1052 ms
| 1200000133 |  2295 ms | 1442 ms | 1337 ms
|1440000137 | 2932 ms | 1612 ms | 1592 ms
|1680000149 | 3280 ms | 1864 ms |  1848 ms
|1920000161 | 3752 ms | 2165 ms | 2166 ms 
|2160000163 | 4792 ms | 2379 ms | 2392 ms
2400000167 |  5290 ms | 2668 ms | 2643 ms 
2640000217 | 5888 ms | 2981 ms |  2908 ms
2880000251 | 6395 ms | 3250 ms |  3258 ms
3120000253 |  6395 ms | 3501 ms | 3442 ms
3360000257 | 7444 ms | 3763 ms | 3704 ms
3600000269 | 7949 ms | 3987 ms | 4045 ms
3840000289 | 8492 ms | 4314 ms | 4279 ms 
4080000293 |  9038 ms | 4520 ms | 4510 ms
4320000329 | 9528 ms | 4824 ms 
4560000343 | 10093 ms | 5099 ms
4800000347 | 10703 ms | 5356 ms 
5040000443 | 11205 ms |  5558 ms 
5280000461 |  11749 ms | 5855 ms 
5520000463 | 12235 ms |  6165 ms 
5760000473 | 12740 ms | 6364 ms
6000000511 | 13269 ms | 6658 ms 
6240000581 | 13795 ms | 6947 ms
6480000589 | 14328 ms | 7171 ms 
6720000593 | 14825 ms | 7496 ms 
6960000613 | 15354 ms | 7731 ms
7200000623 | 16449 ms | 7952 ms 
7680000703 | 16997 ms | 8574 ms 
7920000707 |  17571 ms |  8775 ms 
8160000721 | 18292 ms | 9044 ms
8400000727 | 18603 ms | 9311 ms 
8640000749 |  19138 ms | 9592 ms
8880000757 | 19637 ms | 9852 ms 
9120000809 | 20161 ms | 10166 ms
9360000827 | 20777 ms | 10379 ms
9600000833 | 21203 ms | 10660 ms | 
9840000869 | 21747 ms | 10902 ms | 10991 ms
