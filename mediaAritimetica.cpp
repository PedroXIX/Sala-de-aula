#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float num1, num2,num3;						//resolução do professor

    printf("Insira as tres notas numeros: ");	//printf("Informe a nota 1: ");
    scanf("%f %f %f", &num1, &num2,&num3);		//scanf("%f",&num1);
    float media = (num1+num2+num3)/3;			//printf("Informe a nota 2: ");
	printf("A média é %.1f",media);				//scanf("%f",&num2);
												//printf("Informe a nota 3: ");
												//scanf("%f",&num3);
												//media = (num1+num2+num3)/3;
												//printf("A média é %.1f",media);	
}
