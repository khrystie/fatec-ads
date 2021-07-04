/*
    Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias. 
*/

#include <iostream>

int main() {

  int idade=0;

  std::cout << "\nDigite sua idade em dias: \n";
  std::cin >> idade;

  std::cout <<"Sua idade é de " <<idade/365 <<"anos, " <<idade/(30) <<" meses e " <<idade <<" dias";

}
