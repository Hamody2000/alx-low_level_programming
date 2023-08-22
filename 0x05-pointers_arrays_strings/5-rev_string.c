#include "main.h"

/**
* rev_string - a function check for upper letter
* @s: a character to be checked
* Return: 0 if not amd 1 if upper
*/

void rev_string(char *s)
{
	int lenght = 0;
	int i, temp;

	while (s[lenght])
	{
		lenght++;
	}
	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = temp;
	}
}
