#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float num1, num2;

    printf("Insira a largura e depois a altura do quadrado: ");
    scanf("%f %f", &num1, &num2);
    float area = num1*num2;
	printf("A média é %.1f",area);
}
