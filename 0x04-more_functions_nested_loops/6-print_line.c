#include "main.h"

/**
* print_line - a function check for upper letter
* @n: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{

			_putchar("_");
		}
	}
	_putchar('\n');
}
