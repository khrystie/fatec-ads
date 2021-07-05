/* 
    4- Ler dois valores inteiros negativos ( consistir se é negativo), multiplicar e mostrar o resultado 
*/

#include <iostream>
using namespace std;

int main() {
  
  int n1=0, n2=0, i=10;
  
  cout <<"primeiro numero inteiro positivo ";
  cin >> n1;
  
  cout <<"segundo numero inteiro positivo ";
  cin >> n2;

  if(n1<0 || n2<0){
    while(n1<0) {
      cout <<"primeiro numero inteiro positivo ";
      cin >> n1;
    }
    while(n2<0) {
      cout <<"segundo numero inteiro positivo ";
      cin >> n2;
    }      
  }

   cout <<"\n Soma " <<n1+n2;

}
