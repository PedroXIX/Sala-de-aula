#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char opcao;//s ou N
	char sexo = 'F';
	
	printf("digite uma op��o (S/N): ");
	scanf(" %c",&opcao); //espa�o antes do %c para limpar o buffer do teclado
	printf("op��o digitada: %s", opcao =='S' || opcao == 's' ? "Sim" : opcao== 'N' || opcao=='n'? "N�o" : "valor inv�lido\n"); //operador tern�rio: colocar direto na saida; atribuir va uma vari�vel vai dar erro; eles s� servem para valida��es simples
	printf("sexo digitado: %s", opcao=='F' ? "femino": "masculino	");//compara��o com um caractere � aspas simples '' com 
}
