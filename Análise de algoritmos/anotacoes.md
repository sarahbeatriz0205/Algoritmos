# Análise de algoritmos
- Sempre leva-se em consideração o tempo;

## Tempo de execução
- Tamanho da entrada: quantidade de elementos;
- Melhor caso: quando um dado desejado é encontrado rapidamente;
- Caso médio;
- Pior caso: é o que de fato determina a eficiência;
- obs: uso de memória != tempo de execução 

## Análise teórica - Contagem de operações
- Quantidade de operações irá definir a eficiência do algoritmo;
```
# Exemplo: Maior elemento de um array

Algoritmo Maior(A,N): Inteiro
Entrada
  A: Array de inteiros
  N: Inteiro (Quantidade de elementos do array)
Declaração
  I: Inteiro (Auxiliar para controlar o laço)
  Maior: Inteiro (Maior elemento do array)
Saída
  Valor Inteiro
    Maior elemento do array

# Para contagem de operações, considerar esse trecho:
Início 
  Maior ← A[0] -------------------------------> 2 operações: detecção do valor e atribuição à variável
  Para I de 1 até N-1 Faça -------------------> 2n
    Se (A[I]>Maior) Então --------------------> 2(n - 1)
      Maior ← A[I] ---------------------------> 2(n - 1)
    Fim Se
  Fim Para -----------------------------------> 2(n - 1)
  retorne Maior
Fim
```
