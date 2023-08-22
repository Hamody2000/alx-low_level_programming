#include "main.h"

/**
* print_rev - a function check for upper letter
* @s: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void print_rev(char *s)
{
	int lenght = 0;
	int temp;
	int i;
	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	while (i < lenght)
	{
		temp = s[lenght];
		s[lenght] = s[i];
		s[i] = temp;
		i++;
		lenght--;
	}
	_puts(*s);
}
