#include <iostream>

int insertValue() {

    std::cout << "Insert a value: " << '\n';
    int value{};

    std::cin >> value;

    return value;
}

int calculateValueFunction(int x){

    return x * 2;

}

int main() {

     int value{insertValue()};
     std::cout << "the double value is: " << calculateValueFunction(value) << '\n';
    
    return 0;
}