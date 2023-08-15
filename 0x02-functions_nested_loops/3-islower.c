#include "main.h"

/**
 * _islower - its a function that return 1 if c is lowecase
 *
 * @c: is the character the user puts to see if its a lowercase or not
 *
 * Return: 1 if its a lowercase character; 0 if its not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
