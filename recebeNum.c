#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	printf("Você digitou o número %d",numero);
}
