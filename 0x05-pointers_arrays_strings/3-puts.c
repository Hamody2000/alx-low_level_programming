#include "main.h"

/**
* _puts - a function check for upper letter
* @str: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
