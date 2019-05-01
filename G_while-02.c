#include<stdio.h>
int main()
{
	int obj;
	
	do
	{
		printf("El programa se detiene cuando ingreses un numero de 5 cifras: ");
		scanf("%d",&obj);
	}
	while(obj<=9999);
	
	return 0;
}
