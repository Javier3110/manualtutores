#include <stdio.h>
#include <math.h>
int main()
{
    int nume[5];
    int cuad[5];
    float raiz[5];
    int i;
    
    printf("Este programa evalua la raiz y el cuadrado de 5 valores enteros\n\n");
    for(i=0; i<5; i++)
    {
    	printf("Ingresa un valor: ");
    	scanf("%d", &nume[i]);
    	cuad[i]=pow(nume[i],2);
    	raiz[i]=sqrt(nume[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("\nPara el valor ingresado %d, su cuadrado es %d y su raiz es %f",nume[i],cuad[i],raiz[i]);
	}

    return 0;
}
