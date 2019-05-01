#include<stdio.h>
int main()
{
	char pas1[20];
	char pas2[20];
	
	printf("Registra un password: ");
	scanf("%19s", &pas1);
	
	do
	{
		printf("Por favor confirma tu password: ");
		scanf("%19s", &pas2);
	}
	while(strcmp(pas1,pas2)!=0);
	
	return 0;
}
