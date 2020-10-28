#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i, j;
	int length, breadth;
	printf("Enter lenght: ");
	scanf_s("%d", &length);
	printf("Enter breadth: ");
	scanf_s("%d", &breadth);
	for (i = 1; i <= breadth; i++)
	{
		for (j = 1; j <= length; j++)
		{
			if ((i == 1) || (i == breadth) || (j == 1) || (j == length))
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}	
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
