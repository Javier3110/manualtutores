#include <stdio.h>
int main ()
{
	float var1=0;
	float var2=0;
	float resul=0;
	int menu=0;
	
	printf("El siguiente programa es una calculadora de las 4 operaciones basicas");
	printf("\nIngresa el primer valor a operar: ");
	scanf("%f",&var1);
	printf("Ingresa el segundo valor a operar: ");
	scanf("%f",&var2);
	printf("Estas son las operaciones que puedes realizar \n1 - Suma\n2 - Resta\n3 - Multiplicacion\n4 - Division\n");
	printf("Ingresa el numero de la operacion que deseas realizar: ");
	scanf("%d",&menu);
	
	switch(menu)
	{
		case 1:
			resul=var1+var2;
			break;
		case 2:
			resul=var1-var2;
			break;
		case 3:
			resul=var1*var2;
			break;
		case 4:
			resul=var1/var2;
			break;
	}
	printf("El resultado de tu operacion es: %f",resul);
	
	return 0;
}
