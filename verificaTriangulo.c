#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
    int a,b,c;
 						

	printf("Informe o primeiro lado do tri�ngulo: ");
	scanf("%d",&a);
	if(a<=0){
		printf("valor inv�lido");
	}else {
		printf("Informe o segundo valor: ");
		scanf("%d",&b);
		if(b<=0){
			printf("segundo valor inv�lido");
		}
		else {
			printf("Informe o terceiro valor: ");
			scanf("%d",&c);
			if(c<=0){
				printf("terceiro valor inv�lido");
			}
			else if(((a<b+c)&&(b<a+c))&&(c<a+b)){
				if((a!=b && a!=c)&& b!=c){
					printf("o tri�ngulo � escaleno com as medidas: %d %d %d", a,b,c); //daria para comer�ar pelo equil�tero e terminar pelo escaleno 
					
				}
				else if((a==b && b!=c)||(a==c && c!=b)||(c==b && b!=a)){
					printf("o tri�ngulo � is�scles com as medidas: %d %d %d", a,b,c);
				}
				else{
					printf("o tri�ngulo � equil�tero com as medidas: %d %d %d", a,b,c);
				}
				
			}
			else{
				printf("Isso n�e � um tri�ngulo por n�o respeitar as regras b�sicas");
				
				
			}
		
		}

	}
}

/* come��ndo pelo equil�tero
if(a==b && b==c){
		printf("o tri�ngulo � equil�tero com as medidas: %d %d %d", a,b,c); //daria para comer�ar pelo equil�tero e terminar pelo escaleno 
					
}
else if((a==b)||(a==c)||(c==b)){
		printf("o tri�ngulo � is�scles com as medidas: %d %d %d", a,b,c);
}
else{
	printf("o tri�ngulo � escaleno com as medidas: %d %d %d", a,b,c);
}
