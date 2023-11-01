#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlin - a function that create
 * @str: the size to choose
 * Return: array
 */
int _strlin(char *str)
{
	int size = 0;

	for (; str[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - a function that create
 * @s1: the size to choose
 * @s2: the other sreing
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *concated;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	else if (s2 == NULL)
	{
		s2 = "\0";
	}
	size1 = _strlin(s1);
	size2 = _strlin(s2);
	concated = malloc(size1 + size2 + 1);
	if (concated == 0)
	{
		return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			concated[i] = s1[i];
		else
			concated[i] = s2[i - size1];
	}
	concated[i] = '\0';
	return (concated);
}
