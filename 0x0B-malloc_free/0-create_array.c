#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that create
 * @size: the size to choose
 * @c: the character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
