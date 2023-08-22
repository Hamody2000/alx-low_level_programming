#include "main.h"

/**
* puts2 - a function check for upper letter
* @ste: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
