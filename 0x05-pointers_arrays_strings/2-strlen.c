#include "main.h"

/**
* _strlen - a function check for upper letter
* @s: a character to be checked
* Return: lenght if not amd 1 if upper
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return lenght;
}
