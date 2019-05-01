#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int rnum=0;
	srand(time(NULL));
	
	while(rnum<35)	
	{
		rnum=rand()%31+20;
		printf("El numero aleatorio entre 20 y 50 es: %d\n",rnum);
	}

	return 0;
}
