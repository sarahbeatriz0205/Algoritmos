# Lista 1 - Força Bruta
### Questão 1
a) 

b)

c)
~~~c++
#include <iostream>

char verificacao(int altura1_foto, int altura2_foto, int base1_foto, int base2_foto, int altura_pg, int base_pg){
    int soma_lados_foto = altura1_foto + altura2_foto;
    char retorno;
    if (soma_lados_foto > altura_pg){
        retorno = 'N';
    } 
    else{
        if (base1_foto > base_pg and base2_foto > base_pg){
            retorno = 'N';
        } else{
            retorno = 'S';
        }
    }
    return retorno;
}

int main(){
    int altura_pg, base_pg, altura1_foto, altura2_foto, base1_foto, base2_foto;
    std::cout << "Digite as dimensões da página: ";
    std::cin >> altura_pg >> base_pg;
    std::cout << "Digite as dimensões da 1º foto: ";
    std::cin >> base1_foto >> altura1_foto;
    std::cout << "Digite as dimensões da 2º foto: ";
    std::cin >> base2_foto >> altura2_foto;
    std::cout << verificacao(base1_foto, altura2_foto, base2_foto, altura1_foto, altura_pg, base_pg) << std::endl;
    return 0;
    
}
~~~
### Questão 5
~~~~c++
