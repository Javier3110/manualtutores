#include <stdio.h>
#include <math.h>
int main ()
{
	int var=0;
	float r2=0;
	float r3=0;
	float r4=0;
	
	printf("Este programa calcula las primeras raices enteras de un numero entero.\n");
	printf("Ingresa el valor entero: ");
	scanf("%d",&var);
	
	r2=sqrt(var);
	r3=pow(var,0.333333);
	r4=pow(var,0.25);
	
	printf("El valor de la raiz cuadrada es %f, la raiz cubica es %f y la raiz cuarta es %f",r2,r3,r4);
	
	return 0;
}
