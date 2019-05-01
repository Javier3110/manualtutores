#include <stdio.h>
int main()
{
    char no1[20];
    char no2[20];
    char ap1[20];
    char ap2[20];
    int bandera=1;
    printf("Tienes mas de un nombre.\n0 - SI\n1 - NO\n");
    scanf("%d",&bandera);
    if(bandera == 1)
    {
    	printf("\n\nIngresa tu nombre: ");
    	scanf("%19s",&no1);	
    	printf("\nIngresa tu primer apellido: ");
    	scanf("%19s",&ap1);
    	printf("\nIngresa tu segundo apellido: ");
		scanf("%19s",&ap2);
		printf("\nTu nombre completo es: %s %s %s",no1, ap1, ap2);
        printf("\ntus iniciales son: %c %c %c",no1[0], ap1[0], ap2[0]);
	}
	else
	{
		printf("\n\nIngresa tu primer nombre: ");
    	scanf("%19s",&no1);
    	printf("\nIngresa tu segundo nombre: ");
    	scanf("%19s",&no2);
    	printf("\nIngresa tu primer apellido: ");
    	scanf("%19s",&ap1);
    	printf("\nIngresa tu segundo apellido: ");
		scanf("%19s",&ap2);
		printf("\nTu nombre completo es: %s %s %s %s",no1, no2, ap1, ap2);
        printf("\ntus iniciales son: %c %c %c %c",no1[0], no2[0], ap1[0], ap2[0]);
	}
   
    return 0;
}
