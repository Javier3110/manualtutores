#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int rnum,i;
	srand(time(NULL));
		
	for(i=0;i<7;i++)
	{
		rnum=rand()%31+20;
		printf("El numero aleatorio entre 20 y 50 es: %d\n",rnum);
	}

	return 0;
}
