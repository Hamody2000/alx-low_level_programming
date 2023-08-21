#include "main.h"

/**
* swap_int - a function check for upper letter
* @a: a character to be checked
* @b: also to be checked
* Return: 0 if not amd 1 if upper
*/

swap_int(int *a, int *b)
{
	int val = *a;

	*a = *b;
	*b = val;
}
