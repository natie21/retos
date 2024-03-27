#include <stdio.h>

int main(int argc, char *argv[]) {
	float c1,c2,c3,suma,promedio;
	c1=10;
	c2=8;
	c3=5;
	suma=c1+c2+c3;
	promedio=suma/3;
	printf("la suma de las calificaciones es =%.2f\n",suma);
	printf("el promedio es= %.2f\n",promedio);
	if(promedio>=9 && promedio<10){
		printf("FELICIDADES");	
	}
	else if(promedio>=8 && promedio<9){
		printf("ERES BUEN ALUMNO\n");	
	}
	if(promedio>=7.00 && promedio<8){
		printf("tienes que esforzarte un poco mas :(\n");	
	}
	else if(promedio<7.00){
		printf("No pasaras el año :(\n");
	}
	if(c1>c2 && c1>c3){
		printf("\nla calificacion mas alta es la de matematicas=%.2f",c1);
	}
	else if(c2>c1 && c2>c3){
		printf ("la calificacion mas alta es la de biologia:%.2f",c2);
	}
	if(c3>c1 && c3>c2){
		printf ("la calificacion mas alta es la de historia:%.2f",c3);	
	}
	else if(c2==c1 && c2==c3){
		printf ("las tres calificaciones son iguales");
	 if(c2==0 && c3==0 && c1==0){
			printf("tienes que mejorar bastante");
		}
	return 0;
}

return 0;
}
