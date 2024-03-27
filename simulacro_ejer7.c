#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,inicio,fin,j,k,suma;
	inicio=10;
	fin=15;
	j=0;
	k=0;
	suma=0;
	for(i=inicio;i<=fin;i++){
		printf(" %d ",i);
		suma=suma+i;
		if(i % 2 ==0){
		j=j+1;	
		}
		else{
		k=k+1;	
		}
	}
	printf("\nla suma total del rango de numeros es =%d",suma);
	printf("\ntotal de numeros pares =%d",j);
	printf("\ntotal de numeros impares=%d",k);
	return 0;
}

