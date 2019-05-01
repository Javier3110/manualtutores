#include <stdio.h>

int main()
{
	int fil,col;
	char car;
	
	printf("Este programa realiza una matriz de algun caracter\nQue caracter quieres ingresar a la matriz: ");
    scanf("%s", &car);
    printf("Ingresa el numero de filas que tendra tu matriz: ");
    scanf("%d", &fil);
    printf("Ingresa el numero de columnas que tendra tu matriz: ");
    scanf("%d", &col);
    
    int mat[fil][col];
    int i,j; 
    
    printf("\n");
    for(i=0; i<fil; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		printf("%c ",car);
		}
    	printf("\n");

	}

    return 0;
}
