/*  
    Exercício: 
    
    Escrever um algoritmo que lê um valor em Reais (R$) e 
    calcule qual o menor número possível de notas de 100, 
    50, 10, 5 e 1 em que o valor lido pode ser decomposto. 
    Escrever o valor lido e a relação de notas necessárias. 
*/

#include <iostream>
using namespace std;

int main() {
  
  int valor=0;

  cout <<"\nDigite um valor: R$";
  cin >> valor;

  if(valor%100>=0) {
      cout <<"\nNotas de 100: " <<(valor/100);      
  }
  if (valor%100>=0) {
      cout <<"\nNotas de 50: " <<(valor%100)/50;
  }
  if(valor%50>=0) {
      cout <<"\nNotas de 10: " <<(valor%50)/10;
  }
  if(valor%10>=0) {
      cout <<"\nNotas de 5: " <<(valor%10)/5;
  }
  if(valor%5>=0) {
      cout <<"\nNotas de 1: " <<(valor%5) <<endl;
  }

}
