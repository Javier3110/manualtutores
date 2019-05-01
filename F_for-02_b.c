#include <stdio.h>

int main()
{
	int n;
	
	printf("Este programa multiplica valores enteros por los primeros 4 numeros primos\nCuantos numeros quieres operar? ");
    scanf("%d", &n);
    
    int mult[4]={2,3,5,7};
    int nume[n];
    int i,j; 
    
    for(i=0; i<n; i++)
    {
    	printf("Cual es tu valor numero %d: ",i+1);
    	scanf("%d",&nume[i]);
	}
	
	for(i=0; i<n; i++)
	{   
		printf("\n");
	    for(j=0; j<4; j++)
	    {
	    	printf("\nEl numero %d multiplicado por %d es: %d",nume[i],mult[j],nume[i]*mult[j]);
		}
    }

    return 0;
}
