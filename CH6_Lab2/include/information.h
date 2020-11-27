#include <stdio.h>

typedef struct _datas 
{
	int years, month, day;
}dates;

typedef struct _order 
{
	char num[11];
	dates date;
	int amount;
}order;

