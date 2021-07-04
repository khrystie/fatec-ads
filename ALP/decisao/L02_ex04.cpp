/*
    Exercício: Solicitar um valor inteiro positivo (consistir) 
    e mostrar se esse número é par ou não par
*/

#include <iostream>

int main() {
  
  int num=0;
  
  std::cout << "Apresentar se número digitado é par\n";
  std::cout << "Digite um número inteiro positvo: ";
  std::cin >> num;
  
  if(num%2==0)
    std::cout << "É par!";
  else
    std::cout << "Não é par!";
  
}
