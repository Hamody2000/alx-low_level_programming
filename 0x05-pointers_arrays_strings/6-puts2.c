#include "main.h"

/**
* puts2 - a function check for upper letter
* @s: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void puts2(char *str)
{
	int i;

	while(str[i])
	{
		if(i / 2)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
