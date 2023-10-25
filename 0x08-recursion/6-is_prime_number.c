#include "main.h"
#include <stdio.h>

/**
 *  is_prime_number - a function put a string
 * @n: the output
 * @numb: integer
 * Return: a number
 */

int check_prime(int n, int numb);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - a function check if its a prime numb
 * @n: int
 * @numb: integer
 * Return: int
 */

int check_prime(int n, int numb)
{
	if (numb >= n && n > 1)
		return (1);
	else if (n % numb == 0 || n <= 1)
		return(0);
	else
		return (check_prime(n, numb + 1));
}
