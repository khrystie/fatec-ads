/* 
    Ler dois valores inteiros para as variáveis A e B e efetuar 
    a troca dos valores de forma que a variável A passe a possuir
    o valor da variável B e a variável B passe a possuir o valor
    da variável A. Apresentar os valores trocados.
*/

#include <iostream>

int main() {

  int valora=0, trocaa=0, valorb=0, trocab=0;

  std::cout << "Troca de valores da variável A e B, de forma que a A recebe o valor de B e B recebe o valor de A\n";
  std::cout <<"\nDigite o primeiro número inteiro para a variável A: ";
  std::cin >> valora;

  std::cout <<"\nDigite o segundo número inteiro para a variável B: ";
  std::cin >> valorb;

  trocaa = valorb, trocab = valora;

  std::cout <<"\nVariável A: " <<trocaa <<"\nVariável B: " <<trocab;

}
