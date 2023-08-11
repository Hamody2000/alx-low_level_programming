#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* * main - Entry point of the program
 *  *
 *   * This function generates a random integer, classifies it as positive,
 *    * negative, or zero, and prints the corresponding message.
 *     *
 *      * Return: Always 0 (Success)
 * betty style doc for function main goes there */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if ( n > 0 )
				{
					printf("is postive\n");
				}
				else if ( n < 0)
				{
					printf("is negative\n");
				}
				else
				{
					printf("is zero\n");
				}
					return (0);
}
