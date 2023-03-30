
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num,i,cont;
	printf("\ndigite um número: ");
	scanf(" %d",&num); 
	
	
	for(i=0;i<=num;i++){
		printf("\n*");
		for(cont=1;cont<=i;cont++){
			printf("*");
		}
	}
	
	

}
