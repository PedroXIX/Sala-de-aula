//faça um programa utilizando while que receba um número do usuário enquanto o quadrado dele for menor que 50 em do while
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num;

	do{
		printf("digite o número da operação: ");
		scanf(" %d",&num); 
		}while( num*num<50);
	printf("O programa terminou pois o quadrado do número %d é > 50",num);
}
