#include "main.h"

/**
* print_triangle - a function check for upper letter
* @size: a character to be checked
* Return: 0 if not amd 1 if upper
*/


void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
