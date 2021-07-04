/* 
    Exercício: Solicitar duas notas para o cálculo da média , 
    mostrar a média e se a média for Maior ou igual a 6, 
    mostrar “Aprovado”, caso contrário mostrar “Reprovado”.
*/

using namespace std;
int main() {
	float n1=0,n2=0,media=0;	
  
  cout <<”Calcula media”;
 	
  cout<<”Digite primeira nota: “;
	cin>> n1;
	
  cout<<”digite segunda nota: “;
	cin>>n2;
	
  media=(n1+n2)/2;
	
  // início estrutura de decisão
  if (media>=6)
   	cout<<”Aprovado”;
  else
		cout<<”Reprovado”;
  // fim estrutura de decisão


  cout<<”A media eh: “<<media;	

  return 0;   // não precisa colocar no seu código, pois o dev já inclui autromaticamente
}	
