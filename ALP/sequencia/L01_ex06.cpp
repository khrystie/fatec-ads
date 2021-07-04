/*
    Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado desse número.
*/

#include <iostream>

int main() {

  int num=0;

  std::cout << "Apresentar o quadrado do número inteiro digitado a seguir \n";

  std::cout <<"\nDigite um número inteiro: ";
  std::cin >> num;

  std::cout <<"O quadrado do número " <<num <<" é " <<(num*num);

}
