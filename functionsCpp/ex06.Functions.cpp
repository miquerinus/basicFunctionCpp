// - programa usa exemplos de chamdas de funções
#include <iostream>

// - função que verifica se os numeros informados são iguais
int equilitynumbers(int valuea, int valueb) {

    if (valuea == valueb) {
        std::cout << "the number a: " << valuea << " is equal " << valueb << '\n';

    } else if (valuea != valueb) {
        std::cout << "the number a: " << valuea << " is not equal " << valueb << '\n';
    
    } else {
        std::cout << "error: data unknow ..." << '\n';
    }  

   return 0; 
}

int addFunction(int valuea, int valueb) {
    return valuea + valueb;
}

int subFunction(int valuea, int valueb){
    return valuea - valueb; 
}

// - função verifica se é par ou impar os valores 
void verificanumfunction (int valuea, int valueb) {
    if (valuea % 2 == 0) {
        std::cout << "value " << valuea << " is value par" << '\n';
    } else {
        std::cout << "value " << valuea << " is value impar" << '\n'; 
    } 

    if (valueb % 2 == 0) {
        std::cout << "value " << valueb << " is value par" << '\n';
    } else {
        std::cout << "value " << valueb << " is value impar" << '\n';

    }
}

int main () {

    int a{}, b{}; 

    std::cout << "program equility numbers yes or not \n";
    std::cout << '\n';

    std::cout << "insert value a: " << '\n';
    std::cin >> a;

    std::cout << "insert value b: " << '\n';
    std::cin >> b;

    equilitynumbers(a,b);
    std::cout << '\n';

    verificanumfunction(a,b);
    std::cout << '\n';

    std::cout << "The add is: " << addFunction(a,b) << '\n';

    std::cout << "The sub is: " << subFunction(a,b)<< '\n';


   return 0; 

}