/* 
    Exercício: Solicitar 3 valores inteiros para o cálculo
    da equação de segundo grau, 

      delta  = bˆ2 - 4 * a * c
      Se delta < 0 -> não existem raízes reais
      Se delta = 0 -> existe uma raíz real			
      Se delta > 0 -> existem duas raízes reais		
      Raízes -b +- [deltaˆ(1/2)]/(2*a)
		 
*/

#include <iostream>
#include <math.h>

int main() {
  float b=0, a=0, c=0, r1=0, r2=0, delta=0;
  
  std::cout << "Cálculo da equação de segundo grau = bˆ(2) - 4.a.c\n";
  
  std::cout << "Insira um número inteiro (a):";
  std::cin>> a;
  
  std::cout << "Insira um número inteiro (b):";
  std::cin>> b;
  
  std::cout << "Insira um número inteiro (c):";
  std::cin>> c;

  delta = b*b - 4*a*c;  

  if(delta>0) {
   
    r1=(-b+sqrt(delta))/(2*a);
    r2=(-b-sqrt(delta))/(2*a);

    std::cout <<"Existem duas raizes reais: r1: " <<r1 <<" e r2: " <<r2;
    
  } else {
      if(delta==0){
        std::cout <<"Existe uma raiz real: " <<(-b+ delta)/(2*a);
      }
      else {
        std::cout <<"Não existem raízes reais";
      }
  }

}
