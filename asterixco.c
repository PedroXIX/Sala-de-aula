#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num,i,cont;
	printf("\ndigite um número: ");
	scanf(" %d",&num); 
	
	
	for(i=1;i<=num;i++){
		for(cont=1;cont<=i;cont++){
			printf("*");
		}
		printf("\n");
	}
}
