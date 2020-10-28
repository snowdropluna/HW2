#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int account;
	float beginning_balance, charges, credits, limit ;
	float new_balance;

	while (1) 
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &account);
		if (account == -1) 
		{ 
			break; 
		}
		printf("Enter beginning balance:");
		scanf_s("%f", &beginning_balance);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);

		new_balance = beginning_balance + charges - credits;
		if (new_balance > limit) {
			printf("Account:      %d\n", account);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance:      %.2f\n", new_balance);
			printf("Credit Limit Exceeded.\n");
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}