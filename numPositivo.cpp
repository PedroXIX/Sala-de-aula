#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float media;
						

	printf("Informe o numero: ");
	scanf("%f",&media);
	if(media>=6){
		printf("aluno aprovado");	
	}
	else{
		printf("aluno reprovado");
	}
}
