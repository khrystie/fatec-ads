/*
    Um vendedor necessita de um algoritmo que calcule o preço total 
    devido por um cliente. 
    O algoritmo deve receber o código de um produto e a quantidade
    comprada e calcular o preço total, usando a tabela abaixo: 

    Código do produto Preço unitário 
    1 		             R$ 32,00 
    2 		             R$ 45,00 
    3		               R$ 37,00 
    4 		             R$ 33,00 

*/

/*
    Um vendedor necessita de um algoritmo que calcule o preço total 
    devido por um cliente. 
    O algoritmo deve receber o código de um produto e a quantidade
    comprada e calcular o preço total, usando a tabela abaixo: 

    Código do produto Preço unitário 
    1 		             R$ 32,00 
    2 		             R$ 45,00 
    3		               R$ 37,00 
    4 		             R$ 33,00 

*/

#include <iostream>
using namespace std;

int main() {
int codigo, quantidade=0;
float preco=0, precoTotal=0;

cout<< "Calcular preço total devido por um cliente";
cout<< "Digite o código do produto: ";
cin>> codigo;
cout<< "Digite a quantidade comprada: ";
cin >> quantidade;

  if(codigo==1)
    preco = 32;
  else 
    if(codigo==2)
      preco = 45;
    else 
      if(codigo==3)
        preco = 37;
      else
         if(codigo==4)
           preco = 33;
  
  precoTotal = quantidade * preco;

  cout <<"O produto " <<codigo <<" ";
  cout <<" quantidade " <<quantidade ;
  cout <<" tem preço total de R$" <<precoTotal;
}
