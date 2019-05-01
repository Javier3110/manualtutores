#include <stdio.h>
int main ()
{
	int var=0;
	
	printf("Este programa determina si un numero es par, impar o 0\n");
	printf("Ingresa el valor de un numero entero: ");
	scanf("%d",&var);
	
	if(var==0)
	{
		printf("El valor es cero");
	}
	else if(var%2==0)
	{
		printf("El valor es par");
	}
	else
	{
		printf("El valor es impar");
	}
	
	return 0;
}
