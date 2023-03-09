#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float raio, area;

    printf("Insira o raio do círculo: ");
    scanf("%f", &raio);
    area= (raio*raio)*3.1415 ;
	printf("A área é %.2f",area);
}
