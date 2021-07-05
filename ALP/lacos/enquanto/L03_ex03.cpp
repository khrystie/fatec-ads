/* 
    3- Mostrar os pares entre 10 e 100 e a somatória dos pares
*/

#include <iostream>
using namespace std;

int main() {
  
  int num=0, i=10, soma=0;

  while(i<=100){
    if(i%2==0) {
      cout << i <<"\n";
      soma = soma + i;      
    }
      i+= +1; 
  }
 
  cout <<"Soma: " <<soma;

}
