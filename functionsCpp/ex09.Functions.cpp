// - Usando UMA FUNÇÃO para 2 entradas de dados

#include <iostream> 



int getNumberFunction() {

    std::cout << "Insira um numbero de tipo inteiro: " << '\n';
    int input{};

    std::cin >> input;

    return input;
}



int main() {

     int a { getNumberFunction()};
     int b { getNumberFunction()};

     std::cout << "A soma de 2 valores é: " << a + b << '\n';

    return 0;
}