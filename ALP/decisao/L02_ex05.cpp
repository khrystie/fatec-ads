/* 
    Exercício: Solicitar dois valores inteiros, e mostrá-los
    na ordem crescente e decrescente.( prever para quando os
    valores forem iguais.
*/

#include <iostream>

int main() {
  int n1=0, n2=0;
  
  std::cout << "Apresenta os dois números inteiros digitados a seguir em ordem crescente e decrescente\n";
  
  std::cout << "Digite o primeiro número inteiro: \n";
  std::cin >> n1;

  std::cout << "Digite o segundo número inteiro: \n";
  std::cin >> n2;

  if(n1>n2)
    std::cout <<"Ordem crescente: " <<n2 <<", " <<n1 <<" decrescente: " <<n1 <<", " <<n2;
  else 
      if (n1==n2) 
        std::cout <<"Os números digitados são iguais: " <<n1 <<"=" <<n2;
      else 
        std::cout <<"Ordem crescente: " <<n1 <<", " <<n2 <<" decrescente: " <<n2 <<", " <<n1; 
     
}
