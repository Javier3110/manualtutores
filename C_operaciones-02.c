#include <stdio.h>
int main()
{
	int var0=0;
	int var1=0;
	int var2=0;
	int var3=0;
	int var4=0;
	float prom=0;
	
	printf("Este programa calcula el promedio de 5 valores.\n");
	printf("Ingresa el primer valor: ");
	scanf("%d",&var0);
	printf("Ingresa el segundo valor: ");
	scanf("%d",&var1);
	printf("Ingresa el tercer valor: ");
	scanf("%d",&var2);
	printf("Ingresa el cuarto valor: ");
	scanf("%d",&var3);
	printf("Ingresa el quinto valor: ");
	scanf("%d",&var4);

	prom=(var0+var1+var2+var3+var4);
	prom/=5;
	
	printf("El promedio de los valores es: %f",prom);
	
	return 0;
}
