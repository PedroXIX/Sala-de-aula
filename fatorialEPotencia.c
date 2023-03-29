//faça um programa utilizando while que receba um número do usuário enquanto o quadrado dele for menor que 50 em do while
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int op,num,i,fatorial;

	do{
		printf("##### Menu de opreações #####");
		printf("\n 1-Calcular o fatorial");
		printf("\n 2-Calcular a potência ao cubo");
		printf("\n 2-Calcular a potência ao cubo");
		printf("digite o número da opção: ");
		scanf(" %d",&op); 
		switch (op){
			case 1: 
				printf("digite um número: ");
				scanf(" %d",&num); 
				for(i=num;i>=1;i--){
					fatorial*=i;
					printf("fatorial é: %d",fatorial);
				};break;
			}
	}while( op!=0);
	printf("O programa terminou pois o quadrado do número %d é > 50",num);
}
