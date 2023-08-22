#include "main.h"

/**
* print_rev - a function check for upper letter
* @s: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	for (i = lenght -1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
