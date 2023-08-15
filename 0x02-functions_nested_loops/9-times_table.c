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
		for (j = 0; j < 9; j++)
		{
			for (num = 0; num < 10; num++)
			{
				res = num * i;
				if (res >= 10)
				{
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
				_putchar(res + '0');
				}
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		i++;
	}
}
