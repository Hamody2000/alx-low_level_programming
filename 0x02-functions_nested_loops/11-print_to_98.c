#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 *
 * @n: the number to start count
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n +'0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
