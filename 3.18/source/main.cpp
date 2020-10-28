#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float dollars;
	float salary;

	while (1) 
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &dollars);

		if (dollars == -1) 
		{
			break;
		}

		salary = 200 + 0.09*dollars;
		printf("Salary is: %.2f\n\n", salary);
	}




	system("pause");
	return 0;
}