/*
mostre uma mensagem na tela, de acordo com a idade:
acime de 70 - idoso
de 21 a 70 - adulto
de 14 a 20 - jovem
abaixo de 14 - criança
*/
#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    int idade;
						

	printf("Informe o numero: ");
	scanf("%d",&idade);
	if(idade<=14){
		printf("Criança");	
	}
	else if(idade<=20){
		printf("jovem");
	}
	else if(idade<=70){
		printf("adulto");
	}
	else {
		printf("idoso");
	}
}
