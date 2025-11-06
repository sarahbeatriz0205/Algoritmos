#include <stdio.h>
#include <iostream>
using namespace std;

struct Calculo_Idade{
    public:
    int dias;
    int dias_anos(){
        return dias/365;
        
    } 
    int dias_meses(){ 
        return (dias%365) / 30;
    }
    int resto(){
    return (dias % 365) % 30;
    }
};
 
int main() {
    Calculo_Idade dias;
    cin >> dias.dias;
    cout << dias.dias_anos() << " ano(s)" << endl;
    cout << dias.dias_meses() << " mes(es)" << endl;
    cout << dias.resto() << " dia(s)" << endl;
    return 0;
}