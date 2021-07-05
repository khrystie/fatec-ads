/* 
    2- Mostrar os impares de inteiros entre 0 e 100
*/  

#include <iostream>
using namespace std;

int main() {
  int  i=0;

  while(i<=100){
    
    if(i%2!=0) {
      cout << i <<"\n";
    }
      i+= 1;
  }

}
