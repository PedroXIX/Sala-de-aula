//1. Faça um programa que receba um número, calcule e mostre a tabuada desse número.
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int i;
	printf("\nNúmeros entre 1000 e 2000 que quando divididos por 11 resultam em 2: ");

	for(i=1000;i<=2000;i++){
		if(i%11==2){
			printf("\n %d",i);
		}
	}
}
