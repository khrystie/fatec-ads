/* 
    Exercício: Dado um número inteiro de segundos, 
    mostrar a quantas horas, minutos e segundos ele
    corresponde.
*/

#include <iostream>

int main() {
  int sec=0;
  std::cout << "Digite o valor em segundos: ";
  std::cin >> sec;

//if(sec>=3600) {
  if( ((sec%3600)>0) || (((sec%3600/60)%60)>0)){
    
    if(sec%60>0){
      std::cout 
      <<( (sec-(sec%3600))/3600 ) <<":"
      <<((sec%3600)/60) <<":" 
      <<(sec%60);
    } else{ 
      std::cout 
      <<( (sec-(sec%3600))/3600 ) <<":"
      <<((sec%3600)/60)  
      <<":00"; 
    }

  } else {
    std::cout << sec/3600 <<":00:00" ;
  }
//} else {}

/* 1:30:15   5415 segundos
 3:42:00   13320 segundos
 3:00:00   10800 segundos  */
}

