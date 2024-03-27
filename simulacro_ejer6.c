#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,num,multiplicacion,suma;
	i=1;
	suma=0;
	multiplicacion=1;
	while(i<=5){
	printf("ingresa 5 numeros\n");
	scanf("%d",&num);
	i++;
	if(num % 2==0){
		printf("numero par\n");
		multiplicacion=multiplicacion*num;
	}
	else{
	suma=suma+num;	
	}
	
	}
	printf("la multiplicacion de los pares es =%d",multiplicacion);
	printf("\nla suma de los impares es =%d\n",suma);
	return 0;
}

