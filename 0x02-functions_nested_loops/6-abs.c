#include "main.h"

/**
 * _abs - It is a function that computes the absolute value of an integer
 *
 * @num: the integer to be cheked
 *
 * Return: the absolute value of the integer
 */

int _abs(int num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}
