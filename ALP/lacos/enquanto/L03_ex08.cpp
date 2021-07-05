/*
    8- Solicitar um número inteiro positivo ( consistir ), calcular o fatorial e mostrar
*/

#include <iostream>
using namespace std;

int main() {
  
  int num=0, i=0, aux=1;
  
  cout << "Calcular fatorial. Consistir se numero negativo \n";
  cout <<"Digite um numero inteiro ";
  cin >> num;

  while(num<0){
   cout <<"Digite um numero inteiro ";
   cin >> num;
  }

  while(num>0){
    aux = aux*num;
    
    cout <<"" <<num <<" x ";
    
    num = num - 1;      
  }

  cout <<" = " <<aux;

}
