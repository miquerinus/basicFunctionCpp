#include <iostream>

void getFuncRecupera(){

    float notaRecupera {};

    std::cout << '\n';
    std::cout << "Insira nota final de recuperação: " << '\n';
    std::cin >> notaRecupera;

    if (notaRecupera > 7) {

        std::cout << "Media Final: " << notaRecupera << " Congratulations" << '\n';

    } else if (notaRecupera < 7) {

        std::cout << "Media Final: " << notaRecupera << " Reprovado ... " << '\n';
    
    } else {

        std::cout <<  "Error ... dado desconhecido." << '\n';
    } 
    
}


void mediaAluno() {

    float nota1, nota2, nota3, media;

    std::cout << "Welcome Class Media " << '\n';
    std::cout << '\n';

    std::cout << "=> Please the 1° value: " << '\n';
    std::cin >> nota1;

    std::cout << "=> Please the 2º value: " << '\n';
    std::cin >> nota2;

    std::cout << "=> Please the 3º value: " << '\n';
    std::cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3;

    if (media < 4) {

        std::cout << "Media: " << media << "...Reprovado." << '\n';
    
    } else if (media > 4 && media < 7) {

        std::cout << "Media: " << media << "...Em Recuperação. " << '\n';
        getFuncRecupera();
   
    } else if (media >= 7) {

        std::cout << "Congratulations .." << '\n';
    
    } else {

        std::cout << "ERROR....dados desconhecido" << '\n';
    } 

}

int main () {

    mediaAluno();

    return 0;
}