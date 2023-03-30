#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num,i;
	printf("\ndigite um número: ");
	scanf(" %d",&num); 
	
	printf("valores pares: ");
	for(i=1;i<=num;i++){
		if(i%2==0){
			printf("\n %d",i);
		}
	}
	
	printf("\nValores ímpares");
	for(i=1;i<=num;i++){
		if(i%2==1){
			printf("\n %d",i);
		}
	}
}
