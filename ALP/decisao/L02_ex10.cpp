/* 
    Exercício:
    
        Credito especial em função do saldo médio.
      - ler o saldo medio do cliente,
      - calcular o valor do credito em função da tabela a seguir:
          SALDO MÉDIO		% CREDITO
          0  a 200			0%
          201 a 400			20%
          401 a 600			30%
          Acima de 601			40%
      - mostrar como saída uma mensagem informando o saldo médio e o valor do crédito
*/

#include <iostream>

int main() {
  float saldo=0, porc=0;

  std::cout << "\nValor do crédito disponível com base no saldo médio";
  std::cout << "\nDigite o saldo médio: ";
  std::cin >> saldo;

  if(saldo>=0 && saldo<=600){
      if(saldo<=200)
        porc = 0;
      else{
        if(saldo<=400)
          porc=20;
        else
          porc=30;
      }
  } 
  else
      porc= 40;

  std::cout << "\n porcentagem : " <<porc <<"  % crédito disponível R$" <<(saldo*(1 + (porc/100) ));

}

