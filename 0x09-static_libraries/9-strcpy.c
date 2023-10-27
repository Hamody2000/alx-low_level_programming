#include "main.h"

/**
* *_strcpy - a function check for upper letter
* @dest: character to be checked
* @src: a good character too
* Return: 0 if not amd 1 if upper
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
