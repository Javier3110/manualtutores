#include <stdio.h>

int main()
{
	int fil,col;
	
	printf("Este programa suma dos matrices \n\nIngresa el numero de filas que tendran tus matrices: ");
    scanf("%d", &fil);
    printf("Ingresa el numero de columnas que tendran tus matrices: ");
    scanf("%d", &col);

    
    int ma1[fil][col];
    int ma2[fil][col];
    int i,j; 
    
    printf("\n");
    for(i=0; i<fil; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		printf("Ingresa el elemento [%d,%d] de tu primera matriz: ",i+1,j+1);
    		scanf("%d",&ma1[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<fil; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		printf("Ingresa el elemento [%d,%d] de tu segunda matriz: ",i+1,j+1);
    		scanf("%d",&ma2[i][j]);
		}
	}
	
	printf("\nla matriz resultante es:\n\n");
	for(i=0; i<fil; i++)
    {
    	for(j=0; j<col; j++)
    	{
    		printf("%d ",ma1[i][j]+ma2[i][j]);
		}
		printf("\n");
	}

    return 0;
}
