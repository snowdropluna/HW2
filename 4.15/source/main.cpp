#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float rate,money;
	int i;

	printf("investment of $5000\n");
	for (rate = 10; rate <= 12; rate = rate+0.5) 
	{
		money = 5000;
		printf("rate= %.1f %%\n", rate);
		
		for (i = 1; i <= 15; i++) 
		{
			money = money * (1 + rate / 100);
			printf("%2dyears    money:%.2f\n", i, money);
		}
	
		putchar('\n');
	}






	system("pause");
	return 0;
}