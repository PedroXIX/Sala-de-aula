#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float num1, num2;

    printf("Insira o tamanho da base e depois a altura do tri�ngulo: ");
    scanf("%f %f", &num1, &num2);
    float area= (num1*num2)/2;
	printf("A �rea � %.1f",area);
}
