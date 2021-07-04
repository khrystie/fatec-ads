/*
    Exercício: Elaborar um programa que efetue a apresentação do 
    valor da conversão em real de um valor lido em dólar. O programa
    deve solicitar o valor da cotação do dólar e também a 
    quantidade de dólares disponível com o usuário, para que 
    seja apresentado o valor em moeda brasileira.
*/

#include <iostream>

int main() {
  float dolar=0, cota=0;
  std::cout << "Apresentar conversão do valor do dólar para o real\n";

  std::cout <<"Digite a quantidade disponível em dólar: ";
  std::cin >> dolar;
  
  std::cout <<"Digite o valor da cotação do dólar: ";
  std::cin >> cota;
  
  std::cout << "A quantidade disponível $" <<dolar <<" é convertida em R$" <<(dolar*cota);
}



