#include <stdio.h>
/**
 *main -Entry level of the program
 *
 *Description: A function prints the number, and thenclassifies it
 * as positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numberr = 0;

	while (numberr <= 9)
	{
		putchar(numberr + '0');
		numberr++;
	}
	putchar('\n');

	return (0);
}
