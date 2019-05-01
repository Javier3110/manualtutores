#include <stdio.h>

int main()
{
	
    int nume;
    int mult[4]={2,3,5,7};
    int i;    
    
    printf("Este programa multiplica un valor entero por 4 numeros distintos\nIngresa un valor: ");
    scanf("%d", &nume);
    
    for(i=0; i<4; i++)
    {
    	printf("\nEl numero %d multiplicado por %d es: %d",nume,mult[i],nume*mult[i]);
	}

    return 0;
}
