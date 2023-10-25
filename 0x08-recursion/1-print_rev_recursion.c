#include "main.h"

/**
 * _print_rev_recursion - a function put a string
 * @s: the output
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if(*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
