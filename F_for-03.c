#include <stdio.h>

int main()
{
	int n;
	
	printf("Este programa evalua el area de n triagulos\nCuantos triangulos quieres operar? ");
    scanf("%d", &n);
    
    int base[n];
    int altu[n];
    int i,j; 
    
    for(i=0; i<n; i++)
    {
    	printf("\nCual es la base (b) de tu tirangulo numero %d: ",i+1);
    	scanf("%d",&base[i]);
    	printf("Cual es la altura (h) de tu tirangulo numero %d: ",i+1);
    	scanf("%d",&altu[i]);
	}
	
	for(i=0; i<n; i++)
	{   
		printf("\nEl area de tu triangulo numero %d (%db,%dh) es: %f\n",i+1,base[i],altu[i],base[i]*altu[i]*0.5);
    }

    return 0;
}
