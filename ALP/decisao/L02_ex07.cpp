/* 
    Exercício: Receber 3 valores numéricos em 3 variáveis, A, B e C,
    e trocar os valores entre as variáveis de forma que, ao final do
    algoritmo, a variável A possua o menor valor e a variável C o maior.
*/ 

#include <iostream>

int main() {
  int a=0, b=0, c=0;
  std::cout <<"\n";
  std::cout <<"\nDigite o primeiro valor: ";
  std::cin >> a;
  std::cout <<"Digite o segundo valor: ";
  std::cin >> b;
  std::cout <<"Digite o terceiro valor: ";
  std::cin >> c;

  if( a>b&& a>c) {
    if(b>c) 
      std::cout <<"A= " <<c <<" C= " <<a;
    else
      std::cout <<"A= " <<b <<" C= " <<a; 
  } 
  else {
    if(b>a && b>c) {
      if(a>c)
        std::cout <<"A= " <<c <<" C= " <<b;
      else
        std::cout <<"A= " <<a <<" C= " <<b; 
    } 
    else {
      if(a>b)
        std::cout <<"A= " <<b <<" C= " <<c;
      else
        std::cout <<"A= " <<a <<" C= " <<c;
    }
  }
  
}
