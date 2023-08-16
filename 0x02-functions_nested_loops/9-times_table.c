#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int res;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 9; j++)
		{

			res = i * j;

			if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar((res / 10) + 48);

			_putchar((res % 10) + 48);
		}
		_putchar('\n');
		i++;
	}
}
