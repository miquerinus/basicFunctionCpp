#include <iostream>

void getNumbers(float& x, float& y, float& z);
float mediaFunction(float x , float y, float z);

void getNumbers(float& x, float& y, float& z) {

    std::cout << "Insert an number: " << '\n';
    std::cin >> x;

    std::cout << "Insert another number: " << '\n';
    std::cin >> y;

    std::cout << "Insert more another number: " << '\n';
    std::cin >> z;

}

float mediaFunction(float x, float y, float z) {

     return  (x + y + z) / 3;
}

int main(){

    std::cout << "************************************************************************\n";
    std::cout << '\n';
    std::cout << "                       PROGRAMA - CALCULA MEDIA                         \n";
    std::cout << '\n';
    std::cout << "************************************************************************\n";

    float x{}, y{}, z{}; 
    getNumbers(x, y, z);    
    
    
    std::cout << "The media is: " << mediaFunction(x, y, z) << '\n';

    return 0;
}

