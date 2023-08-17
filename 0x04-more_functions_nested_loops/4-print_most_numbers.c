#include "main.h"

/**
* print_most_numbers - a function check for upper letter
* Return: 0 if not amd 1 if upper
*/

void print_most_numbers(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		if (numbers == 2 || numbers == 4)
		{
			numbers++;
			continue;
		}
		else
		{
			_putchar(numbers + '0');
			numbers++;
		}
	}
	_putchar('\n');
}
