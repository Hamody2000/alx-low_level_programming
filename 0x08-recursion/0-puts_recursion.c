#include "main.h"

/**
 * _puts_recursion - a function put a string
 * @s: the output
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
