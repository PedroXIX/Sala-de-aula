//fa�a um programa utilizando while que receba um n�mero do usu�rio enquanto o quadrado dele for menor que 50 em do while
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num;

	do{
		printf("digite o n�mero da opera��o: ");
		scanf(" %d",&num); 
		}while( num*num<50);
	printf("O programa terminou pois o quadrado do n�mero %d � > 50",num);
}
