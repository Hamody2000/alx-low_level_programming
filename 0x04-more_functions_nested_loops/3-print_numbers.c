#include "main.h"

/**
* print_numbers - a function check for upper letter
* Return: 0 if not amd 1 if upper
*/

void print_numbers(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		_putchar(numbers + '0');
		numbers++;
	}
	_putchar('\n');
}
