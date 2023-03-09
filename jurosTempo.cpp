/*se o tempo for menor que 3 meses não cobrar juros; se for de 3 a 6 mese, cobrar 5% ao m~es;
acima de 6 meses cobrar 10% ao mês. Validar se o tempo é válido 

*/

#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float valor, prestacao;
	int tempo;						

	printf("Informe o valor inicial da prestação: R$ ");
	scanf("%f",&valor);
	if(valor<0){
		printf("valor inválido");
	}else{
		printf("Informe o tempo de atraso em meses: ");
		scanf("%d",&tempo);
		if(tempo<0){
			printf("tempo inválido");
		}
		else if(tempo>=3 && tempo<=6){
			prestacao = valor+(valor*(0,05)*tempo);	
			printf("O valor da prestação é: %.2f",prestacao);
		}
		else if(tempo>6){
			prestacao = valor+(valor*(0,10)*tempo);
			printf("O valor da prestação é: %.2f",prestacao);
		}
		
	}

}


