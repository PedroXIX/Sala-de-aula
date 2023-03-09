#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float num;
						

	printf("Informe o numero: ");
	scanf("%f",num);
	if(num>0){
		printf("positivo");	
	}
	else if(num<0){
		printf("negativo");
	}
	else{
		printf("zero");
	}
}
