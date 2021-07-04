/* 
  Faça um algoritmo que receba 2 números e apresente a multiplicação dos dois números
*/

#include <iostream>

int main() {
  // variáveis e atribuição 
  int num1=0, num2=0;

  // saída
  std::cout << "Mostra a múltiplicação de dois números digitados\n";
  std::cout <<"Digite o primeiro número: ";
  // entrada do primeiro número a ser digitado
  std::cin >> num1;

  std::cout <<"Digite o segundo número: ";
  // entrada do segundo número a ser digitado
  std::cin >> num2;

  // saída do resultado 
  std::cout <<"O resultado de "<< num1 <<" x "<< num2 <<" é "<< num1*num2;
}
