#include "main.h"

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
	last_digit = num % 10;
	_putchar('last_digit');

	return (last_digit);
}
