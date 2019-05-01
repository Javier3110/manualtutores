#include <stdio.h>
#include <math.h>
int main()
{
	int n=0;
	
	printf("Este programa evalua la raiz y el cuadrado de valores enteros\nCuantos valores desea operar: ");
	scanf("%d", &n);	
	
    int nume[n];
    int cuad[n];
    float raiz[n];
    int i;    
    
    for(i=0; i<n; i++)
    {
    	printf("Ingresa un valor: ");
    	scanf("%d", &nume[i]);
    	cuad[i]=pow(nume[i],2);
    	raiz[i]=sqrt(nume[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("\nPara el valor ingresado %d, su cuadrado es %d y su raiz es %f",nume[i],cuad[i],raiz[i]);
	}

    return 0;
}
