#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float raio, area;

    printf("Insira o raio do c�rculo: ");
    scanf("%f", &raio);
    area= (raio*raio)*3.1415 ;
	printf("A �rea � %.2f",area);
}
