#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, c;

	for (c = 1; c < 501; c++) 
	{
		for (b = 1; b < 501; b++) 
		{
			for (a = 1; a < 501; a++) 
			{
				if (c * c == a * a + b * b) {
					printf("%3d %3d %3d\n", c, a, b);
				}
			}
		}
	}



	system("pause");
	return 0;
}