/* 
    7-Escreva um algoritmo que gere o números de 1000 a 1999 e
    escreva aqueles que dividido por 11 dão resto igual a 5
*/

#include <iostream>

using namespace std;

int main() {
  int i=0;

  cout << "Gerar numero de 1000 a 1999\n";
  
  // inicio de i 
  i= 1000;
  
  // repeticao
  while(i<=1999) {
  //cout <<i <<"\n";
    if(i%11==5){
      cout <<i <<"\n";
    }
  i = i+ 1;
  }

}
