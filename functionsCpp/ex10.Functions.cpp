#include <iostream>

int getNumber(){

    std::cout << "Insira um numbero: " << '\n';
    int number{};

    std::cin >> number;

    return number;
}


void doubleNumber(int ab) {

    std::cout << ab <<  " doubled is: " << ab * 2 << '\n';

}

int main() {

    int a{getNumber()};

    doubleNumber(a);

   return 0; 
}