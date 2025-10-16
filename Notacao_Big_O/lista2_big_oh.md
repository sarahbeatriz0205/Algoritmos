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
for (int j = 1; j <= n; j+=2) // n
sum += (i+j);
return sum;
}
// O(n²)
~~~
~~~c++
f) long long f6(long long n){
int sum = 0;
for (int i = 1; i <= 50; i+=2) 
for (int j = 1; j <= n; j+=3)
sum += (i+j);
return sum;
// O(n)
// As incrementações nos loops não terão influência na análise, pois são constantes e crescem linearmente (são somas, mas se fossem multiplicações, seria logn)
}
~~~
~~~c++
g) long long f7(long long n, long long m){
int sum = 0;
for (int i = 1; i <= m; i++) // m
for (int j = 1; j <= n; j∗=2) // log2n
sum += (i+j);
return sum;
}
// O(mlogn)
~~~
~~~c++
h) long long f8(long long m){
int sum1 = 0;
for (int i = 1; i <= m∗m; i++) // m²
sum1 += i;
int sum2 = 0;
for (int j = 1; j <= m; j++) m
sum2 += j;
return sum1∗sum2;
}
// O(n²) 
~~~c++
i) long long f9(long long n, long long m){
int sum = 0;
for (int i = 1; i <= m; i++) // m
for (int j = 1; j <= n; j+=2) // crescimento linear -> n
sum += (i+j);
return sum;
}
// O(mn) -> pelo jeito, isso é possível 
// loops estão aninhados, então eu multiplico as operações 

~~~
~~~c++
j) long long f10(long long n, long long m){
int sum = 0;
for (int i = 1; i <= m; i++)
sum += i;
for (int j = 1; j <= n; j++)
sum += j;
return sum;
}
// O(m + n) -> loops não estão aninhados, então eu somo as operações
~~~