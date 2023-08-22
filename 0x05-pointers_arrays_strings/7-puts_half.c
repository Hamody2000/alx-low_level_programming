#include "main.h"

/**
* puts_half - a function check for upper letter
* @str: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void puts_half(char *str)
{
	int i; 

	while (str[i])
	{
		i++;
	}
	i++;
	for(i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
