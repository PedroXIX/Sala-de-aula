//faça um programa utilizando while que receba um número do usuário enquanto o quadrado dele for menor que 50
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num=0;

	while( num*num<50){
		printf("digite o número da operação: ");
		scanf(" %d",&num); 
		}
	printf("O programa terminou pois o quadrado do número %d é > 50",num);
}
