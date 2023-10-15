#include <iostream>

int readNumber() {
    
   std::cout << "Enter a number: ";
   int x{};
   std::cin >> x;
   
    return x; 
}

void writeAnswer(int x) {
    
    std::cout << "The divison is : " << x << '\n';
}

int main() {
    
    int z{readNumber()};
    int y{readNumber()};
    
    writeAnswer(z / y);
    
    return 0;
}