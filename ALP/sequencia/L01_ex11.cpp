/* 
    Exercício: Efetuar o cálculo e a apresentação do valor
    de uma prestação em atraso, utilizando a fórmula
    PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
*/

#include <iostream>

int main() {
  float prest=0, valor=0, taxa=0, tempo=0;

  std::cout << "Apresentar o valor da prestação e seu valor em atraso\n";
  
  std::cout <<"Digite o valor original da prestação: ";
  std::cin >> valor;
  
  std::cout <<"Digite o valor da taxa: ";
  std::cin >> taxa;
  
  std::cout <<"Digite o tempo de atraso: ";
  std::cin >> tempo;

  prest = valor + valor*(taxa/100)*tempo;

  std::cout <<"O valor da prestação é de R$" <<valor <<" e seu valor com atraso é de R$" <<prest;
}
