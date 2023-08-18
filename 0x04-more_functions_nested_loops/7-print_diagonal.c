#include "main.h"

/**
* print_diagonal - a function check for upper letter
* @n: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			for (j; j < i; j++)
			{
				_putchar(' ');
			{
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
