/*
Fa�a um programa que receba um n�mero e mostre uma mensagem se ele for maior que 10
*/
#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float numero;
						

	printf("Informe o numero: ");
	scanf("%f",&numero);
	if(numero>10){
		printf("maior que dez");	
	}
//sem necessidade de else, s� foi rquisitado o if
}
