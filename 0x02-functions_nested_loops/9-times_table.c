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
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			res = i * j

			if (res <=9)
				_putchar(' ');
			else
				_putchar((res / 10) + 48);

			_putchar((res % 10) +48);
		}
		_putchar('\n');
		i++;
	}
}
