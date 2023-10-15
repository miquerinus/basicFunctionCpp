#include <iostream>

int add(int x, int y) {
    
    return x + y;
}
void printResult(int z) {
    
    std::cout << "A resposta e: " << z << '\n';
}

int getUserInput() {
    
    std::cout << "=> Enter a number: " << '\n';
    int x{};
    std::cin >> x;
    return x;
}

int main () {
   
    int x{getUserInput()};
    int y{getUserInput()};
    
    std::cout << x << " + " << y << '\n';
      
    int z{add(x, y)};
    std::cout << '\n';
    printResult(z);
        
    return 0;
}
