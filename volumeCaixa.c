#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float volume, comprimento,largura,altura;						

	printf("Medidas da caixa retangular\n");
	printf("Informe o comprimento: ");
	scanf("%f",&comprimento);
	printf("Informe a largura: ");
	scanf("%f",&largura);
	printf("Informe a altura: ");
	scanf("%f",&altura);
	volume= comprimento*largura*altura;
	printf("O volume é: %.1f",volume);	
}
