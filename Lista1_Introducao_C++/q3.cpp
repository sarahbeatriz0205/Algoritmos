#include <iostream>

//com float
float area(float d){
    float a = 3.14159 * ((d / 2) * (d / 2));
    return a;
}

int main(){
    float d;
    std::cin >> d;
    float calc = area(d);
    std::cout << calc << std::endl;
    return 0;
}