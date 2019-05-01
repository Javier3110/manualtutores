#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int volado;
	int n,i,sol=0,agui=0;

	srand(time(NULL));
	
	printf("Cuantas veces deseas lanzar la moneda: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		volado=rand()%2;
		
		if (volado==1)
		{
			printf("La moneda dio aguila\n");
			agui++;
		}
		else if(volado==0)
		{
			printf("La moneda dio sol\n");
			sol++;
		}	
	}
	printf("\nSe obtuvieron %d soles y %d aguilas.",sol,agui);
	
	return 0;
}
