/*se o tempo for menor que 3 meses n�o cobrar juros; se for de 3 a 6 mese, cobrar 5% ao m~es;
acima de 6 meses cobrar 10% ao m�s. Validar se o tempo � v�lido 

*/

#include <stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
    float valor, prestacao;
	int tempo;						

	printf("Informe o valor inicial da presta��o: R$ ");
	scanf("%f",&valor);
	if(valor<0){
		printf("valor inv�lido");
	}else{
		printf("Informe o tempo de atraso em meses: ");
		scanf("%d",&tempo);
		if(tempo<0){
			printf("tempo inv�lido");
		}
		else if(tempo>=3 && tempo<=6){
			prestacao = valor+(valor*(0,05)*tempo);	
			printf("O valor da presta��o �: %.2f",prestacao);
		}
		else if(tempo>6){
			prestacao = valor+(valor*(0,10)*tempo);
			printf("O valor da presta��o �: %.2f",prestacao);
		}
		
	}

}


