#include "main.h"

/**
 *  _sqrt_recursion - a function put a string
 * @n: the output
 * @val: square root jgf
 * Return: a number
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - a function
 * @n: numbering
 * @val: valuinghu
 * Return: integer
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val +1));
	else
		return (-1);
}
