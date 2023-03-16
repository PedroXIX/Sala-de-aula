/* peça para o usuário informar dois números abaixo e escolher uma das opções abaixo:

[+] soma
[-]subtração
[*] multiplicação
[/] divisão 

conforme a opção escolhida, calcular e exibir ao final o resultado da operação.
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
		
	printf("digite o sinal da operação: ");
	scanf(" %c",&opcao); 

	
	switch(opcao){//switch case só para int e char
		case '+': resultado = valor+valor2; break;
		case '-': resultado =  valor-valor2 ;break;
		case '*': resultado =  valor*valor2;break;
		case '/': resultado =  valor/valor2;break;
		default :printf("Opção inválido");
	}
	printf("o valor é: %.2f", resultado);
}
