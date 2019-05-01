#include<stdio.h>
int main()
{
	int obj=100;
	int num;
	
	do
	{
		printf("Da un numero para restarlo al objetivo: ");
		scanf("%d",&num);
		obj-=num;
	}
	while(obj>1);
	
	return 0;
}
