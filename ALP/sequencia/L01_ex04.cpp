/*
    Exercício: Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula: 
    VOLUME <-- 3.14159 * RAIO2  * ALTURA.
*/

#include <iostream>

int main() {
  float altura=0, raio=0;

  std::cout << "Cálculo do volume de uma lata de óleo\n";
  std::cout <<"\nDigite a altura da lata de óleo em metros: ";
  std::cin >> altura;

  std::cout <<"\nDigite o comprimento do raio da lata de óleo em metros: ";
  std::cin >> raio;

  std::cout <<"\nO volume da lata de óleo é "<< 3.14159*(raio*raio)*altura <<"m3"; 
}
