#include <stdio.h>
int main ()
{
	float var1=0;
	float var2=0;
	float resul=0;
	int flag=0;
	char menu;
	
	printf("El siguiente programa es una calculadora de las 4 operaciones basicas");
	printf("\nIngresa el primer valor a operar: ");
	scanf("%f",&var1);
	printf("Ingresa el segundo valor a operar: ");
	scanf("%f",&var2);
	printf("\nEstas son las operaciones que puedes realizar \n+  Suma\n-  Resta\n*  Multiplicacion\n/  Division\n");
	printf("Ingresa el numero de la operacion que deseas realizar: ");
	scanf("%s",&menu);
	
	switch(menu)
	{
		case '+':
			resul=var1+var2;
			break;
		case '-':
			resul=var1-var2;
			break;
		case '*':
			resul=var1*var2;
			break;
		case '/':
			resul=var1/var2;
			break;
		default:
			printf("\nOperacion no valida");
			flag=1;
	}
	
	if(flag==0)
	{
		printf("\nEl resultado de tu operacion es: %f",resul);
	}
	return 0;
}
