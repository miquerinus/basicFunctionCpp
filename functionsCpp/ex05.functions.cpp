#include <iostream>

float calculateMedia(float x, float y, float z) {

    return (x + y + z) / 3;
}

int main() {

    // usando funções: 

    float nota1, nota2, nota3;
    float media;

    
    std::cout << "Insert your 1º value: " << '\n';
    std::cin >> nota1;

    std::cout << "Insert your 2º value: " << '\n';
    std::cin >> nota2;

    std::cout << "Insert your 3º value: " << '\n';
    std::cin >> nota3;

    media = calculateMedia(nota1, nota2, nota3 );

         if (media <= 4) {

             std::cout << "Nota: " << media << " Reprovado ... " << '\n';
   
        } else if (media >= 5 || media < 7 ) {

             std::cout << "Nota: " << media << " Recuperação ...." << '\n';
    
        } else if (media >= 7) {

            std::cout << "Nota: " << media << " Aprovado ...." << '\n';
    
        } else {

            std::cout << "Valor desconhecido ... ";
        } 

    return 0;

}