/* 
    Exercício: Faça um programa que calcule a área da circunferência.
*/

#include <iostream>

int main() {
  float raio=0;

  std::cout << "Apresentar a área da circunferência \n";
  std::cout << "Digite o valor do raio: ";
  std::cin >> raio;
  std::cout << "A área da circunferência de raio " <<raio <<" é de " <<(raio*raio*3.14159);
}
