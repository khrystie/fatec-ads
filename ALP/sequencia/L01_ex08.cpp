/*
    Faça um algoritmo que leia a idade de uma pessoa
    expressa em ano, mês e dia e mostre-as em dias.
*/

#include <iostream>

int main() {
  inteiro anos=0, meses=0, dias=0;

  std::cout << "Apresentar idade de anos, meses e dias em dias\n";
  std::cout << "Digite sua idade em anos: \n";
  std::cin >> anos;
  std::cout << "Digite sua idade em meses: \n";
  std::cin >> meses;
  std::cout << "Digite sua idade em dias: \n";
  std::cin >> dias;

  std::cout << "Sua idade de anos, meses e dias é de : " <<(anos*365) <<", " <<(meses*30) <<", " << dias <<" dias, respectivamente";
 
}
