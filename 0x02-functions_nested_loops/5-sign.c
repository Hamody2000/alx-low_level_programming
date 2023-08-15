#include "main.h"

/**
 * print_sign - A function to print + if n greater than zero
 *
 * @n: the number to be checked
 *
 * Return: + if n is greater than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');
		
		return (-1);
	}
}
