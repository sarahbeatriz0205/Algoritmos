#include <iostream>

double area(double d){
    double a = 3.14159 * ((d / 2) * (d / 2));
    return a;
}

int main(){
    double d;
    std::cin >> d;
    double calc = area(d);
    std::cout << calc << std::endl;
    return 0;
}