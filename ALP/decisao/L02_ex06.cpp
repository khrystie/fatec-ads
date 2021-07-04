/* 
    Exercício: Receber 3 valores numéricos, X, Y e Z, e 
    verificar se esses valores podem corresponder aos 
    lados de um triângulo. Em caso afirmativo, informar 
    ao usuário se o triângulo é equilátero, isóscelos ou
    escaleno.
*/

#include <iostream>

int main() {
  
  int x=0, y=0, z=0;
  
  std::cout << "Apresentar se valores digitados podem formar um triângulo e, se sim, classificá-lo como equilatéro, isósceles ou escaleno\n";

  std::cout << "Digite o valor do primeiro lado: \n";
  std::cin >> x;
  
  std::cout << "Digite o valor do segundo lado: \n";
  std::cin >> y;  
  
  std::cout << "Digite o valor do terceiro lado: \n";
  std::cin >> z;

  if(x&&y&&z>0) { //verifica se >0
    if((x==y) && (x==z) ){ // eq
        std::cout <<"equilátero";
     } 
    else{
        if((x==y)||(x==z)||(y==z)){ // iso
            std::cout <<"isósceles";
          } 
        else{ 
          std::cout <<"escaleno";
        } //fim iso
    }
  } 
  else { 
      std::cout <<"Valores não correspondem a um triângulo";
  } // final verif. se >0

}

