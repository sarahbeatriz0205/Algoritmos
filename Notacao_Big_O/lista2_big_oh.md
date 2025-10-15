# Lista de exercícios 2 - Notação Big O
## Aluna: Sarah Beatriz Barbosa do Nascimento
### Questão 1
~~~c++
a) long long f1(long long N){
long long s = 0;
for ( int i = 0; i < N; i++)
for( int j = 0; j < N; j++)
s++;
return s;
}
~~~
~~~c++
b) long long f2(long long N){
long long s = 0;
for( int i = 0; i < N ∗ N; i++ )
for( int j = 0; j < N; j ++ )
s++;
return s;
}
// O(n³)
~~~

