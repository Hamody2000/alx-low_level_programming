#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that create
 * @str: the size to choose
 * Return: array
 */

char *_strdup(char *str)
{
	int size = 0;
	char *duplicated;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size; str[size] != '\0'; size++)
		;
	duplicated = malloc(size * sizeof(*str) + 1);
	if (duplicated == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		duplicated[i] = str[i];
	}
	return (duplicated);
}
