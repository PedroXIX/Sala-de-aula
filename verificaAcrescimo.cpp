/* fa�a um programa em C que receba o valor de um produto e a porcentagem conform o menu abaixo:
1 - 15%
2- 20%
3 - 30%

ao final, exibva o valor do produto com o acr�scimo selecionado.

*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float valor;
	int opcao;

	printf("digite o valor: ");
	scanf("%f",&valor); 
	printf("1- [15%%]\n");
	printf("2- [20%%]\n");
	printf("3- [30%%]\n");
		
	printf("digite o n�mero do acr�scimo: ");
	scanf("%d",&opcao); 

	
	switch(opcao){//switch case s� para int e char
		case 1: valor = valor*1.15;break; //valor *=1.15;
		case 2: valor= valor*1.20 ;break;
		case 3: valor= valor*1.30;break;
		default :printf("N�mero inv�lido");
		//se fosse um switch case entre 15 e 30; o case 1 seria 15
	}
	printf("o valor �: %.2f", valor);
}
