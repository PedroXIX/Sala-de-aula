//1. Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int i;
	printf("\nN�meros entre 1000 e 2000 que quando divididos por 11 resultam em 2: ");

	for(i=1000;i<=2000;i++){
		if(i%11==2){
			printf("\n %d",i);
		}
	}
}
