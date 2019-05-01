#include <stdio.h>
int main ()
{
	int var=0;
	
	printf("Este programa determina si un numero es par, impar o 0\n");
	printf("Ingresa el valor de un numero entero: ");
	scanf("%d",&var);
	
	if(var%2==0)
	{
		printf("El valor es multiplo de 2");
	}
	else if(var%3==0)
	{
		printf("El valor es multiplo de 3");
	}
	else if(var%5==0)
	{
		printf("El valor es multiplo de 5");
	}
	else if(var%7==0)
	{
		printf("El valor es multiplo de 7");
	}
	else
	{
		printf("No puedo determinar de quien es multiplo");
	}
	
	return 0;
}
