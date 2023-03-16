#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char opcao;//s ou N
	char sexo = 'F';
	
	printf("digite uma opção (S/N): ");
	scanf(" %c",&opcao); //espaço antes do %c para limpar o buffer do teclado
	printf("opção digitada: %s", opcao =='S' || opcao == 's' ? "Sim" : opcao== 'N' || opcao=='n'? "Não" : "valor inválido\n"); //operador ternário: colocar direto na saida; atribuir va uma variável vai dar erro; eles só servem para validações simples
	printf("sexo digitado: %s", opcao=='F' ? "femino": "masculino	");//comparação com um caractere é aspas simples '' com 
}
