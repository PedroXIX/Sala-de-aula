#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num,num2;
	char op ='s';

	while( op!= 'n' && op!='N'){
		printf("digite o n�mero da opera��o: ");
		scanf(" %d %d",&num,&num2); 
		printf("o resultado �: %d. \n", num+num2);
		printf("digite n ou N para parar: ");
		scanf(" %c",&op); 
		}

}
