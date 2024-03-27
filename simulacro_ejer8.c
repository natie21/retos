#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero,suma;
	suma=0;
	printf("ingresa numeros negativos max 5 ,si quiers terminar ingresa un numero positivo\n");
	do{
		printf("ingresa un numero\n");
		scanf("%d",&numero);
		if(numero<0){
			suma=suma+numero;	
		}
		
		
	} while(numero<0);
	printf("l suma total es=%d",suma);
	return 0;
}

