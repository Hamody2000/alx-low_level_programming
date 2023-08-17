#include "main.h"

/**
* _isdigit - a function check for upper letter
* @c: a character to be checked
* Return: 0 if not amd 1 if upper
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
