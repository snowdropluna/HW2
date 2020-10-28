#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int num,hours,people;
	float rate,total,money;

	printf("Enter number to choose type which employees you want to calculate its weekly salary\n");
	printf("1.hourly workers\n");
	printf("2.commission workers\n");
	printf("3.pieceworkers\n");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
			printf("Enter hourly workers number: ");
			scanf_s("%d", &people);
			printf("Enter hours worked: ");
			scanf_s("%d", &hours);
			printf("Enter houly rate: ");
			scanf_s("%f", &rate);

			if (hours <= 40) 
			{
				total = hours * rate * people;
			}
			else 
			{
				total = (40 * rate + (hours - 40)*1.5*rate) * people;
			}
			printf("You may pay the hourly workers $%.2f\n", total);
			break;
		case 2:
			printf("Enter hourly workers number: ");
			scanf_s("%d", &people);
			printf("Enter their gross weekly sales: ");
			scanf_s("%f", &money);
			
			total = people * (250 + money * 0.057);
			printf("You may pay the commission workers $%.2f\n", total);
			break;
		case 3:
			printf("Enter hourly workers number: ");
			scanf_s("%d", &people);
			printf("Enter pieceworkers fixed amount of money of the item they produce: ");
			scanf_s("%f", &money);

			total = people * money;
			printf("You may pay the pieceworkers $%.2f\n", total);
			break;
	}

	

	system("pause");
	return 0;
}