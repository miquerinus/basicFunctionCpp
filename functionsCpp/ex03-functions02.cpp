#include <iostream>
// - programa que chama funções que chama funções e que chama funções;
void doC() {

  std::cout << "=> Starting function C() ... não há function para chamar" << '\n';
}

void doB() {
  std::cout << "=> Starting function B() ... chamando function C" << '\n';
  doC();
}

void doA() {

  std::cout << "=> Starting function A() ... chamando function B" << '\n';
  // - quando fizer a chamada de tudo ele retorna para chamar o que tinha para
  doB();

  std::cout << "=> Retornou a function A() " << '\n';
  std::cout << "=> Ending function A() " << '\n';
}

int main() {

  std::cout << "=> Starting main() " << '\n' ;

  doA();

  std::cout << "=> Retornou a function Main" << '\n';
  std::cout << "=> Ending main()" << '\n';

  return 0;
}


