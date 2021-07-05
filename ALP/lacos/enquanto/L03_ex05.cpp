/* 
    5- Ler 10 valores inteiros, um de cada vez, e contar quantos deles estão no intervalo [10,20] e 
    quantos deles estão fora do intervalo, ao final mostrar estas informações.
 */

#include <iostream>

using namespace std;

int main() {

  int  n=0, i=0, dentro=0, fora=0;

  while(i<10) {
    cout << "\n digite numero " <<i+1 <<"\n";
    cin >> n;
    
    if(n>=10 && n<=20)
      dentro += 1; 
    else 
      fora += 1;
    
    i+= 1;
  }
  
  cout << "\n dentro do intervalo " <<dentro <<"\n";
  cout << "\n fora do intervalo " <<fora <<"\n";

}

