#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float valor, taxa,prestacao;
	int tempo;						

	printf("Informe o valor inicial da prestação: R$ ");
	scanf("%f",&valor);
	printf("Informe a taxa de juros ao mês (%%): ");
	scanf("%f",&taxa);
	printf("Informe o tempo de atraso em meses: ");
	scanf("%d",&tempo);
	if(tempo>3){
		prestacao = valor+(valor*(taxa/100)*tempo);	
	}
	else{
		prestacao=valor;
	}
	
	printf("O valor da prestação é: %.2f",prestacao);	
}
