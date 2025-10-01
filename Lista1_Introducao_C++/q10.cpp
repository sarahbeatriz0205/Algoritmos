#include <iostream>
#include <cmath>

double raiz_rec(double n, double raiz_anterior){
    double raiz_candidata = (raiz_anterior + (n / raiz_anterior)) / 2.0;
    std::cerr << "DEBUG: raiz_candidata = " << raiz_candidata << std::endl;
    if (std::fabs(raiz_candidata - raiz_anterior) < 0.000001){
        return raiz_candidata;
    }
    return raiz_rec(n, raiz_candidata);
}

double raiz_laco(double n){
    double raiz_anterior = 1;
    double raiz_candidata = raiz_anterior + (n / raiz_anterior) / 2.0;
    while (std::fabs(raiz_candidata - raiz_anterior) > 0.000001){
        raiz_anterior = raiz_candidata;
        raiz_candidata = raiz_anterior + (n / raiz_anterior) / 2.0;
    }
    return raiz_candidata;
}

double raiz(double n){
    return raiz_rec(n, 1);
}

int main(){
    double n;
    std::cin >> n;
    double r = raiz(n);
    std::cout << r << std::endl;
    return 0;
}