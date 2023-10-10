int subFunction(int a, int b){

    return a - b;
}

int addFunction(int a, int b){

    return a + b;
}

#include<iostream>

int main() {

    // - Programa que solicita 2 valores, soma e subtrai.

    int a{}, b{}; 

    std::cout << "Insert A value: " << '\n';
    std::cin >> a;

    std::cout << "Insert B value: " << '\n';
    std::cin >> b;
    
    std::cout << "The result addiction:  " << addFunction(a,b) << '\n'
              << "The result subtration: " << subFunction(a,b) << '\n';

 return 0; 

}