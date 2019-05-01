#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int volado;
	srand(time(NULL));
	
	volado = rand() %2;
	
	if (volado==1)
	{
		printf("La moneda dio aguila");
	}
	else if(volado==0)
	{
		printf("La moneda dio sol");
	}
	
	return 0;
}
