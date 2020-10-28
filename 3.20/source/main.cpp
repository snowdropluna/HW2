#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int hours;
	float rate,salary;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
		
		if (hours == -1)
		{
			break;
		}

		printf("Enter hourly rete of the worker ($00.00): ");
		scanf_s("%f", &rate);

		if (hours <= 40) 
		{
			salary = hours * rate;
		}
		else 
		{
			salary = 40 * rate + rate * 1.5*(hours - 40);
		}
		printf("Salary is $%.2f\n\n", salary);
	}

	system("pause");
	return 0;
}