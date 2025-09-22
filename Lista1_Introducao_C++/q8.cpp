#include <iostream>
using namespace std;

// Algoritmo de Euclides
int gcd(int a, int b) {
  int r;
  while ((a % b) > 0)  {
    r = a % b; // resto
    a = b; // "a" vai ser o "b"
    b = r; // b será o resto, quando for 0, b é o MDC
  }
  return b;
}

int main(){
    int a, b;
    cin >> a >> b;
    int mdc = gcd(a, b);
    cout << mdc << endl;
    return 0;
}