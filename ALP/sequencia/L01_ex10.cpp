/* 
    Exercício: Faça um programa que receba um número e mostre o resto da divisão por 6.
*/

#include <iostream>

int main() {
  int num=0;

  std::cout << "Apresentar o resto da divisão por 6 do número a seguir \n";

  std::cout << "Digite um número: \n";
  std::cin >> num;
  std::cout << "O resto do número " <<num <<" divido por 6 é " <<num%6;
}
