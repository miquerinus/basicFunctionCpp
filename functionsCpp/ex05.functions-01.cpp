// - Exemplo de uso de Expressões e Function
#include <iostream>

// - Function que retorna valor 10 
int returnFucntion(){

    return 5 + 5;
}

int main () {

    int a {2};
    int b {a + 3};
    int c { (2 * b) + 4};
    int d {b};
    int e { returnFucntion() };

    std::cout << b << '\n';    
    std::cout << c << '\n';
    std::cout << d << '\n'; 
    std::cout << e << '\n';
    
    return 0;

}
