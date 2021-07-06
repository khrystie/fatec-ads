/*
    10- Solicitar um número inteiro positivo (consistir) e mostrar se é ou não primo
    Autor: Chrystie
    Data: 05/07/2021 
*/

#include <iostream>
using namespace std;

int main() {
    
    int numero=0, i=2, ehPrimo=0;
    
    cout <<"\nDigite um número: ";
    cin >>numero;        
    
    while(numero<0) {
        cout <<"Digite um número inteiro positivo: ";
        cin >>numero;
    } 

    if (numero==0 || numero==1) /* true=1, quando ehPrimo=1, não é primo  */
        ehPrimo = true; 
    
    else if (numero==2) /* false=0, quando ehPrimo=0, é primo */
        ehPrimo = false; 
    
    while(numero>i) {
        /* imprime cálculo do resto */
        //cout <<numero <<"%" <<i <<" = " <<numero%i <<endl;
        if( (numero%i)==false ) /* se resto=0, há mais que um divisor*/
            ehPrimo = true; /* logo, o numero não é primo, ou seja ehPrimo=1 */
    
        i++;
    } 

    if(ehPrimo==false) /* ehPrimo = 0 */
        cout <<numero <<" eh primo \n" <<endl;
    else 
        cout <<numero <<" nao eh primo\n" <<endl;
}
