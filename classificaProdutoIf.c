#include<stdio.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	
	int opcao;

	
	printf("1 - alimento n�o perec�vel\n");
	printf("2,3 e 4 - alimento perec�vel\n");
	printf("5 ou 6 - vestu�rio\n");
	printf("7 - higiene pessoal \n");
	printf("8 at� 15- Limpeza e utens�lios dom�sticos \n");

		
	printf("digite o n�mero da opera��o: ");
	scanf(" %d",&opcao); 

	
	if(opcao ==1) printf("\nalimento n�o perec�vel"); 
	else if(opcao >= 2 && opcao <=4) printf("alimento perec�vel"); 
	else if(opcao == 5 || opcao ==6) printf("vestu�rio");
	else if(opcao >= 7 && opcao <=15) printf("Limpeza e utens�lios dom�sticos");
	else printf("Op��o inv�lido"); 
	
	
	getch();// comando atribuido ao execut�vel do programa em C para ele congelar a tela
	//system("pause"); //faz o mesmo que o getch();

}
