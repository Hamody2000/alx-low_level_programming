#include "main.h"

/**
 * factorial - a function put a string
 * @n: the output
 * Return: a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	factorial(0) = 1;

	return (n * factorial(n-1));
}
