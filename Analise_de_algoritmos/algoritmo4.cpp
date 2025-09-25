#include <chrono>
#include <iostream>
using namespace std;

bool primo(int n){
    if (n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }

    // Supondo que n é primo:
    bool p = true;
    int d = 3;

    while (p <= (n / 2) and d <= (n / 2)){
        if (n % d == 0){
            p = false;
        }
    d = d + 2;
    }
    return p;
}

int main(){
    int n;
    cin >> n;
    int x = primo(n);
    cout << x << endl;
    return 0;
}