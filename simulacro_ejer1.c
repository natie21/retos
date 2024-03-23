#include <stdio.h>

int main(int argc, char *argv[]) {
	int inicio,fin,i,j,suma;
	float promedio;
	//contador
	j=0;
	printf("Ingresa el primer numero entero\n");
	scanf("%d",&inicio);
	printf("Ingresa el segundo numero entero\n");
	scanf("%d",&fin);
	printf("secuencia de numeros....\n");
	for(i=inicio;i<=fin;i++){
	j=j+1;
	suma=suma+i;
		printf(" %d ",i);
	}
	promedio=suma/j;
	printf("\nla suma de todos los numeros es =%d",suma);
	printf("\nel promedio de los numeros es =%f",promedio);
	
	return 0;
}

