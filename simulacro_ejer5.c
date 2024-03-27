#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,numeros,j,neg,pos,resta;
	i=1;
	j=1;
	neg=0;
	pos=0;
	for(i=1;i<=10; i++){
		printf("ingresa 10 numeros positivos o negativos \n");
		scanf("%d",&numeros);
		printf("vamos en el=%d\n",j);
		j++;
	if(numeros>0 && numeros % 2 ==0 ){
	pos=pos+numeros;	
	}
	else{
	neg=neg+numeros;
	}
	}
	resta=pos-neg;
	printf("la suma de los negativos es =%d\n",neg);
	printf("la suma de los pares positivos  es =%d\n",pos);
	printf("la resta final es =%d",resta);
	return 0;
}

