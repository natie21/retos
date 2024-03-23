#include <stdio.h>

int main(int argc, char *argv[]) {
	float litro,metro,metros,litros;
	metros=1500;
	litros=40;
	litro=litros/metros;
	metro=litro*2000;
	printf("la gasolina gastada por metro es de =%f\n",litro);
	printf("\nla gasolina gastada en 2000 mts es =%f",metro);
	return 0;
}

