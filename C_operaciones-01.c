#include <stdio.h>
int main()
{
	float alto=0;
	float largo=0;
	float rect=0;
	
	printf("Este programa calcula el area de un rectnagulo.\n");
	printf("Ingresa el largo del rectangulo: ");
	scanf("%f",&largo);
	printf("Ingresa el alto del rectangulo: ");
	scanf("%f",&alto);
	
	rect=largo*alto;
	
	printf("El area del rectangulo es: %f",rect);
	
	return 0;
}
