#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int rnum;
	srand(time(NULL));
	
	rnum=rand()%31+20;

	printf("El numero aleatorio entre 20 y 50 es: %d",rnum);
	
	return 0;
}
