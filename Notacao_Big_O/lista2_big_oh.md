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
// O(n²)
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
~~~c++
c) long long f3(long long N){
long long s = 0;
for( int i = 0; i < N; i++ ) // n = 1000 -> 1000 vezes -> i = 0 vai se tornar i = 1000
for( int j = 0; j < i; j ++ ) 
s++;
return s;
}
// O(n²)
~~~
~~~c++
d) long long f4(long long N){
long long s = 0;
for( int i = 0; i < N; i++ ) // n
for( int j = 0; j < N ∗ N; j++ ) //n²
for( int k = 0; k < j; k++ ) // n² ------> n² * n² * n = n^5
s++;
return s;
}
// O(n^5)
~~~
~~~c++
e) long long f5(long long n){
int sum = 0;
for (int i = 1; i <= n; i++) // n
for (int j = 1; j <= n; j+=2) // log2n
sum += (i+j);
return sum;
}
// O(log2n)
~~~
