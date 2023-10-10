// - Programa 01 CPP
// - usei uma função que retorna um resultado de tipo inteiro de uma multiplicação
#include <iostream>

 int calculate(int x){

    // - retorna o dobro de valor de x
    return x * 2;

    }

int main() {

    int x {};
    
    std::cout << "Insert a number for multiplication: " << '\n';
    std::cin >> x;

    std::cout << calculate(x) << '\n';

    return 0; 
}