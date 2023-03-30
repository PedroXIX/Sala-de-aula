//3. faça um programa que receba a idade de 15 pessoas e que calcule e mostre:
#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int i,id,quinze = 0,deze=0,trint=0,qua= 0,ses=0;
	float media=0;
	

	for(i=1;i<=15;i++){
		system("cls");
		printf("\ndigite a idade: ");
		scanf(" %d",&id); 
		media+=id;
		if(id > 0 && id<=15){
			quinze++;
		}
		else if( id<=30){
			deze++;
		}
		else if(id<=45){
			trint++;
		}
		else if(id<=60){
			qua++;
		}
		else if (id >= 61){
			ses++;
		}
		else{
			printf("valor inválido");
		}
	}
	printf("\nAté 15 anos: %d", quinze);
	printf("\nDe 16 a 30 anos %d", deze);
	printf("\nDe 31 a 45 anos: %d", trint);
	printf("\nDe 46 a 60 anos: %d", qua);
	printf("\nAcima de 61 anos: %d", ses);
	
	printf("\nMédia: %.2f", media/15);
}
