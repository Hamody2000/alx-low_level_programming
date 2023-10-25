#include "main.h"

/**
 *  _pow_recursion - a function put a string
 * @x: the output
 * @y: the other y
 * Return: a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return ( x * _pow_recursion(x, y - 1));
}
