#include <iostream>
using namespace std;

int divisores(int n){
    int d=1, contador=1;
    while (d != n){
        if ((n % d) == 0)
            contador = contador + 1;
        d = d + 1;
    }
    return contador;
}

int main(){
    int n;
    cin >> n;
    int div = divisores(n);
    cout << div << endl;
    return 0;
}