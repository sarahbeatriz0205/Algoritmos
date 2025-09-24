### Questão 3:
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
    retorne falso -------------------------> 1
  fim se
```
- 2(n-1) + 2(n-1) + 2(n-1) = 2n-2 + 2n-2 + 2n-2
- 1 + 2n + 2n - 2 + 2n - 2 + 2n - 2 + 1 + 1 = 1 + 8n -2 - 2 - 2 + 1 + 1 + 1
- 8n - 6 + 3
- 8n - 3
