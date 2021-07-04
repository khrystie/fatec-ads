/*
    Exercício:
    
    Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, 
    onde i é um valor inteiro e positivo e a, b, c, são quaisquer 
    valores reais e os escreva. A seguir: 

      Se i=1 escrever os três valores a, b, c em ordem crescente. 
      
      Se i=2 escrever os três valores a, b, c em ordem decrescente. 
      
      Se i=3 escrever os três valores a, b, c de forma que o maior 
      entre a, b, c fique dentre os dois. 

*/

#include <iostream>
using namespace std;
/* Se i=1 escrever os três valores a, b, c em ordem crescente. 
Se i=2 escrever os três valores a, b, c em ordem decrescente. 
Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois. 
*/
int main() {
  int i=0;
  float a=0,b=0,c=0;

  cout << "Digite um número inteiro \n";
  cin >> i;
  cout << "Digite um número real \n";
  cin >> a;
  cout << "Digite um número real \n";
  cin >> b;
  cout << "Digite um número real \n";
  cin >> c;

  if(i==1){
    if(a>=b && a>=c)
      if(b<=c)
        cout <<"\n" <<b <<"," <<c <<"," <<a;
      else 
        cout <<"\n" <<c <<"," <<b <<"," <<a;
    else
      if(b>=a && b>=c)
        if(a<=c)
          cout <<"\n" <<a <<"," <<c <<"," <<b;
        else
          cout <<"\n" <<c <<"," <<a <<"," <<b;
      else
        if(a<=b)
          cout <<"\n" <<a <<"," <<b <<"," <<c;
        else 
          cout <<"\n" <<b <<"," <<a <<"," <<c;  
  } 
  else {
    if(i==2){
      if(a>=b && a>=c)
        if(b<=c)
          cout <<"\n" <<a <<"," <<c <<"," <<b;
        else 
          cout <<"\n" <<a <<"," <<b <<"," <<c;
      else 
        if(b>=a && b>=c)
          if(a<c)
            cout <<"\n" <<b <<"," <<c <<"," <<a;
          else
            cout <<"\n" <<b <<"," <<a <<"," <<c;
        else 
            if(a<=b)
              cout <<"\n" <<c <<"," <<b <<"," <<a;
            else 
              cout <<"\n" <<c <<"," <<a <<"," <<b;
    }
    else {
      if(i==3){
        if(a>=b && a>=c)
          if(b<=c)
            cout <<"\n" <<b <<"," <<a <<"," <<c;
          else 
            cout <<"\n" <<c <<"," <<a <<"," <<b; 
        else 
          if(b>=a && b>=c)
            if(a<=c)
              cout <<"\n" <<a <<"," <<b <<"," <<c;
            else
              cout <<"\n" <<c <<"," <<b <<"," <<a;
          else 
            if(a<=b)
              cout <<"\n" <<a <<"," <<c <<"," <<b;
            else
              cout <<"\n" <<b <<"," <<c <<"," <<a;
      }
    }
  }

} // fim programa
