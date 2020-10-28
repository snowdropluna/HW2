#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i, j;

	for (i = 1; i <= 5; i++) 
	{
		for (j = 0; j < 5 - i; j++) 
		{
			printf(" ");
		}
		for (j = 0; j < (2*i - 1); j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++) 
	{
		for (j = 0; j < (i + 1); j++) 
		{
			printf(" ");
		}
		for (j = 0; j < (7 - 2 * i); j++) 
		{
			printf("*");
		}
		printf("\n");
	}



	system("pause");
	return 0;
}