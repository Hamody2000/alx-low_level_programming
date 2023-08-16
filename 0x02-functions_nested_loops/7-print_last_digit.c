#include "main.h"
#include <limits.h>

/**
 * print_last_digit - it prints the last digit of the input
 *
 * @num: the input to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		num = -1 * num;
	}
	else if (num == INT_MIN)
	{
		num = (num + 1) * -1;
	}
	last_digit = num % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
