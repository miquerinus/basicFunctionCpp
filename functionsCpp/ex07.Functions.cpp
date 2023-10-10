#include <iostream>


int getNumber() {

    int number{};

    std::cout << "Insert a number: " << '\n';
    std::cin >> number;

    return number;

}

int main() {

    // - declara uma variavel para receber o returno de getnumber()
    int receptor{ getNumber()};

    std::cout << "This number is: " << receptor << '\n';
    std::cout << "The double value of " << receptor << " is : " << receptor * 2 << '\n';

    return 0;
    
}