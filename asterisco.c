#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int i,num;

	printf("digite o número da operação: ");
	scanf(" %d",&num); 
	
	if(num>0){
	
	//i++ refere se a i=i+1
		for( i=1;i<=num;i++){
			printf("\n * ");
		}

	}
	else{
		printf("valor inválido");
	}
}
