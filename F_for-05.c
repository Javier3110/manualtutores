#include <stdio.h>

int main()
{
	int fil,col;
	
	printf("Este programa captura una matriz\n\nIngresa el numero de filas que tendra tu matriz: ");
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
    		printf("Ingresa el elemento[%d,%d] de tu matriz: ",i+1,j+1);
    		scanf("%d",&mat[i][j]);
		}
	}
	printf("\nTu matriz es:\n\n");
	for(i=0; i<fil; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		printf("%d ",mat[i][j]);
		}
		printf("\n");
	}

    return 0;
}
