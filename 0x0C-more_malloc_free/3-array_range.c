#include "main.h"
#include <stdlib.h>

/**
 * array_range - check for mallocatede memory
 * @min: input int
 * @max: pointer
 * Return: array
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
