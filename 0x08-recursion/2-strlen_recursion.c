#include "main.h"

/**
 * _strlen_recursion - a function put a string
 * @s: the output
 * Return: the number
 */

int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s > '\0')
	{
		num = num + _strlen_recursion(s + 1) + 1;
	}
	return (num);
}
