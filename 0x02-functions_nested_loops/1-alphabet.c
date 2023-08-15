#include "main.h"

/**
 * print_alphabet - it prints the alphabet from a to z
 *
 */

void print_alphabet(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
		_putchar(character);
	_putchar('\n');
}
