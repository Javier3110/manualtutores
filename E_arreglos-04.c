#include <stdio.h>
#include<string.h>
int main()
{
    char pass1[11];
    char pass2[11];
    printf("Ingresa tu password, no mas de 14 caracteres: ");
    scanf("%10s",&pass1);
    printf("Ingresa el password de nuevo: ");
    scanf("%10s",&pass2);
    
    if(strcmp(pass1,pass2)==0)
    {
    	printf("Los password coinciden");
	}
	else
	{
		printf("Los password no coinciden");
	}
 
    return 0;
}
