#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 *main -Entry level of the program
 *
 *Description: This function generates a random integer, prints the number, and thenclassifies it as positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 * */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n < 0)
				{
					printf("%d is negative\n", n);
				}
				else
				{
					printf("%d is zero\n", n);
				}
					return (0);
}
