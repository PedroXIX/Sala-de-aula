//fa�a um programa utilizando while que receba um n�mero do usu�rio enquanto o quadrado dele for menor que 50
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num=0;

	while( num*num<50){
		printf("digite o n�mero da opera��o: ");
		scanf(" %d",&num); 
		}
	printf("O programa terminou pois o quadrado do n�mero %d � > 50",num);
}
