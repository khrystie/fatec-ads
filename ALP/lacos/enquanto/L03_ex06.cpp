/* 
    6- Ler três notas de 50 alunos de uma turma. 
    Para cada aluno, calcule a média ponderada, como segue: 
         MP = ( n1*2 + n2*4 + n3*3 ) / 10
    Além disso, calcule a média geral da turma. 
    Mostre a média de cada aluno e uma mensagem "Aprovado", 
    caso a média seja maior ou igual a sete, e uma mensagem
    "Reprovado", caso contrário. Ao final, mostre a média geral.
*/

#include <iostream>

using namespace std;

int main() {
  
  float n1=0, n2=0, n3=0, mp=0, media=0;
  int i=0;

  mp = (n1*2 + n2*4 + n3*3)/10;

  while(i<2) {
    cout << i+1 <<"- digite a nota 1\n";
    cin >> n1;
    cout << i+1 <<"- digite a nota 2\n";
    cin >> n2;
    cout << i+1 <<"- digite a nota 3\n";
    cin >> n3;

    mp = (n1*2 + n2*4 + n3*3)/10;    
    
    if(mp>=7){
      cout <<"Aprovado\n";
    } else {
      cout <<"Reprovado\n";
    }
    
    cout <<"Media " <<mp <<"\n\n";

    media = (media + mp);

    i+=1;
  } 

  cout <<"\n media da sala " <<media/i;

}
