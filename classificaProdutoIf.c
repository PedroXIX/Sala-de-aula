#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int opcao;

	
	printf("1 - alimento não perecível\n");
	printf("2,3 e 4 - alimento perecível\n");
	printf("5 ou 6 - vestuário\n");
	printf("7 - higiene pessoal \n");
	printf("8 até 15- Limpeza e utensílios domésticos \n");

		
	printf("digite o número da operação: ");
	scanf(" %d",&opcao); 

	
	if(opcao ==1) printf("\nalimento não perecível"); 
	else if(opcao >= 2 && opcao <=4) printf("alimento perecível"); 
	else if(opcao == 5 || opcao ==6) printf("vestuário");
	else if(opcao >= 7 && opcao <=15) printf("Limpeza e utensílios domésticos");
	else printf("Opção inválido"); 
	
	
	getch();// comando atribuido ao executável do programa em C para ele congelar a tela
	//system("pause"); //faz o mesmo que o getch();

}
