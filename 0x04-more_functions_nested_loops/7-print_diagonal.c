#include "main.h"

/**
* print_diagonal - a function check for upper letter
* @n: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		_putchar('\\');
		while (i < n)
		{
			_putchar('\n');
			_putchar(' ');
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}

}
