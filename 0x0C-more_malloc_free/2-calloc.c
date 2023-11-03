#include "main.h"
#include <stdlib.h>

/**
 * _memset - check for mallocatede memory
 * @s: input int
 * @b: pointer
 * @n: a input number
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - check for mallocatede memory
 * @nmemb: input int
 * @size: pointer
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
