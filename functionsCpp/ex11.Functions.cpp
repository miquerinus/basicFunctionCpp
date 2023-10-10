#include <iostream>

int getNumbers() {

    std::cout << "Insira numero de tipo inteiro: " << '\n';
    int input{};

    std::cin  >> input;

    return input;
}


void doubleValue(int value) {

  std::cout << "The double value is: " << value  * 2 << '\n'; 

}

int main() {

    doubleValue(getNumbers());

    return 0; 
}