#include <stdio.h>
#include <math.h>
int main()
{
    int nums[3] = {0,0,0};
    int cuad[3] = {0,0,0};
    printf("Este programa calcula el cuadrado de 3 numeros enteros.\n\nIngresa el primer valor: ");
    scanf("%d",&nums[0]);
    cuad[0]=pow(nums[0],2);
    printf("\nIngresa el segundo valor: ");
    scanf("%d",&nums[1]);
    cuad[1]=pow(nums[1],2);
    printf("\nIngresa el tercer valor: ");
    scanf("%d",&nums[2]);
    cuad[2]=pow(nums[2],2);
    printf("\nLos cuadrados son: %d, %d, %d",cuad[0], cuad[1], cuad[2]);
    return 0;
}

