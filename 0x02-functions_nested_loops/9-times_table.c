#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int num;
	int res;
	
	i = 0;

	while (i < 10)
	{
		for (num = 0; num < 10; num++)
		{
			res = num * i;
			_putchar(res);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
