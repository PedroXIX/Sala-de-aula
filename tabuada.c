//1. Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int num,i;
	printf("\ndigite um n�mero: ");
	scanf(" %d",&num); 

	for(i=1;i<=10;i++){
		printf("\n %d X %d = %d",num,i,num*i);
		}
		

}
