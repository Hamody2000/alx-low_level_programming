#include "main.h"

/**
* print_rev - a function check for upper letter
* @s: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
