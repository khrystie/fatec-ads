/* 
    Exercício: Receber valores de base e altura de um 
    triângulo e verificar se são valores válidos 
    (positivos maioresque zero). Em caso afirmativo, 
    calcular a área do triângulo
 */

#include <iostream>

int main() {

  int base=0, altura=0;

  std::cout << "Verificar se valores para a base e altura de um triângulo são válidos\n";
  
  std::cout <<"Digite o valor da altura do triângulo: ";
  std::cin >>altura;
  
  std::cout <<"Digite o valor da base do triângulo: ";
  std::cin >>base;
  
  if((base>0)&&(altura>0))
    std::cout << " A área do triângulo é: " <<(base*altura)/2;
  else 
    std::cout << "Valores inválidos";
  
}

