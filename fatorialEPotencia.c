//fa�a um programa utilizando while que receba um n�mero do usu�rio enquanto o quadrado dele for menor que 50 em do while
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int op,num,i,fatorial;

	do{
		printf("##### Menu de oprea��es #####");
		printf("\n 1-Calcular o fatorial");
		printf("\n 2-Calcular a pot�ncia ao cubo");
		printf("\n 2-Calcular a pot�ncia ao cubo");
		printf("digite o n�mero da op��o: ");
		scanf(" %d",&op); 
		switch (op){
			case 1: 
				printf("digite um n�mero: ");
				scanf(" %d",&num); 
				for(i=num;i>=1;i--){
					fatorial*=i;
					printf("fatorial �: %d",fatorial);
				};break;
			}
	}while( op!=0);
	printf("O programa terminou pois o quadrado do n�mero %d � > 50",num);
}
