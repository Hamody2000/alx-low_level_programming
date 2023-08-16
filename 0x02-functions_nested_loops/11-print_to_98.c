#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 *
 * @n: the number to start count
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		else if (n > 9)
		{
			n = n / 10;
		}
		else if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar((98 / 10) % 10 + '0');
}
