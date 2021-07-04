#include <iostream>

int main() {
  //declaração de variáveis
  int num1, num2;
  // atribuir valor 0 
  num1=0;
  num2=0;

  std::cout << "Programa que lê dois números inteiros e retorna o valor da soma\n";

  std::cout <<"Digite o primeiro número inteiro: \n";
  std::cin >> num1;
  
  std::cout <<"Digite o segundo número inteiro: \n";
  std::cin >> num2;

  std::cout <<"A soma dos dois números inteiros é: \n" <<num1+num2;
}
