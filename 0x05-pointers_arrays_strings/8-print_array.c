#include "main.h"

/**
* print_array - a function check for upper letter
* @a: character to be checked
* @n: a good character too
* Return: 0 if not amd 1 if upper
*/

void print_array(int *a, int n)
{
	int i; 

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
