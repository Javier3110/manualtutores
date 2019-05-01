#include <stdio.h>
int main ()
{
	int calif=0;
	int resul=0;
	
	printf("El siguiente programa y te da la oportunidad de mejorar tu calificacion");
	printf("\nIngresa tu calificacion: ");
	scanf("%d",&calif);
	
	if(calif==10)
	{
		printf("Felicidades tu calificacion es la mas alta");
	}
	else if(calif>=7)
	{
		printf("Tu calificacion puede mejorar, resuelve la siguiente ecuacion:\nx-23=4\Cual es el valor de 11x?\n");
		scanf("%d",&resul);
		if(resul==297)
		{
			printf("Acertaste, tu calificacion ha subido a %d",calif+1);
		}
		else
		{
			printf("No es correcto, tu calificacion se mantiene en: %d",calif);
		}
	}
	else
	{
		printf("Lo siento, tu calificacion es muy baja, has reprobado");
	}
	
	return 0;
};
