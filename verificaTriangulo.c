#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
    int a,b,c;
 						

	printf("Informe o primeiro lado do triângulo: ");
	scanf("%d",&a);
	if(a<=0){
		printf("valor inválido");
	}else {
		printf("Informe o segundo valor: ");
		scanf("%d",&b);
		if(b<=0){
			printf("segundo valor inválido");
		}
		else {
			printf("Informe o terceiro valor: ");
			scanf("%d",&c);
			if(c<=0){
				printf("terceiro valor inválido");
			}
			else if(((a<b+c)&&(b<a+c))&&(c<a+b)){
				if((a!=b && a!=c)&& b!=c){
					printf("o triângulo é escaleno com as medidas: %d %d %d", a,b,c); //daria para comerçar pelo equilátero e terminar pelo escaleno 
					
				}
				else if((a==b && b!=c)||(a==c && c!=b)||(c==b && b!=a)){
					printf("o triângulo é isóscles com as medidas: %d %d %d", a,b,c);
				}
				else{
					printf("o triângulo é equilátero com as medidas: %d %d %d", a,b,c);
				}
				
			}
			else{
				printf("Isso nãe é um triângulo por não respeitar as regras básicas");
				
				
			}
		
		}

	}
}

/* começãndo pelo equilátero
if(a==b && b==c){
		printf("o triângulo é equilátero com as medidas: %d %d %d", a,b,c); //daria para comerçar pelo equilátero e terminar pelo escaleno 
					
}
else if((a==b)||(a==c)||(c==b)){
		printf("o triângulo é isóscles com as medidas: %d %d %d", a,b,c);
}
else{
	printf("o triângulo é escaleno com as medidas: %d %d %d", a,b,c);
}
