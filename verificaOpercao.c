/* pe�a para o usu�rio informar dois n�meros abaixo e escolher uma das op��es abaixo:

[+] soma
[-]subtra��o
[*] multiplica��o
[/] divis�o 

conforme a op��o escolhida, calcular e exibir ao final o resultado da opera��o.
*/
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float valor,valor2,resultado;
	char opcao;

	printf("digite o valor: ");
	scanf("%f",&valor); 
	printf("digite o valor 2: ");
	scanf("%f",&valor2);
	
	printf("+ \n");
	printf("- \n");
	printf("* \n");
	printf("/ \n");	
		
	printf("digite o sinal da opera��o: ");
	scanf(" %c",&opcao); 

	
	switch(opcao){//switch case s� para int e char
		case '+': resultado = valor+valor2; break;
		case '-': resultado =  valor-valor2 ;break;
		case '*': resultado =  valor*valor2;break;
		case '/': resultado =  valor/valor2;break;
		default :printf("Op��o inv�lido");
	}
	printf("o valor �: %.2f", resultado);
}
