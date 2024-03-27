#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion,saldoin,retiro,abono,saldores,saldoab,movimientos ;
	saldoin=3000;
	saldores=0;
	saldoab=0;
	movimientos=0;
	do{
		printf("\n******************MENU PRINCIPAL*******************\n");
		printf("1. Retiro de efectivo\n");
		printf("2. Abono a tu cuenta\n");
		printf("3. salir del programa\n");
		printf("***************************************************\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			printf("hola,ingresa la cantidad que deseas retirar\n");
			scanf("%d",&retiro);
			if(retiro<=saldoin){
				printf("tu retiro fue exitoso\n");
				saldores=saldoin-retiro;
				movimientos++;
				printf("tu saldo restante es de =%d",saldores);
			}
			else if(retiro>saldoin){
				printf("Saldo insuficiente");
			}
			break;
		case 2:
			saldores=0;
			printf("tu saldo ahora es de =%d\n",saldores);
			printf("ingresa la cantidad que desees abonar\n");
			scanf("%d",&abono);
			if(abono>0){
				saldores=saldores+abono;	
				printf("muy bien,ahora tu saldo es de =%d",saldoin);
				movimientos++;
			}
			
			break;
		case 3:
			printf("el numero de movimientos es =%d\n",movimientos);
			printf("Estas saliendo del programa...");
			break;
			
		default:
			printf("lo siento esa opcion no esta disponible");
		};
	} while(opcion !=3);
	return 0;
}

