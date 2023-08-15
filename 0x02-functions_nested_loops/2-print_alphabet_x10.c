#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet fron a to z 10 times
 *
 */

void print_alphabet_x10(void)
{
	int character;
	int i = 0;
	
	while (i < 11)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
			_putchar('\n');
		}
		i++;
	}
}
