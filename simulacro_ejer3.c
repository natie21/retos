#include <stdio.h>

int main(int argc, char *argv[]) {
	//int suma,cal;
	float n1,n2,n3,n4,promedio,suma,cal;
	n1=-8;
	n2=0;
	n3=-7;
	n4=-7;
	
	suma=n1+n2+n3+n4;
	cal=4;
	promedio=suma/cal;
	printf("la suma de las calificaciones es =%.2f\n",suma);
	printf("el promedio es= %.2f\n",promedio);
	if(promedio>=9){
	printf("A");	
	}
	else if(promedio>=8.00){
		printf("B");
	}
	if(promedio>=7.00){
	printf("C");	
	}
	else if(promedio<=7.00){
		printf("\n F\n");
	}
	if(promedio==0){
		printf("el valor es nulo");
	}
	else if(promedio<0){
		printf ("la calificacion no es valida");
	}
	return 0;
}

