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
	char letter;
	char numberr;

	letter = '0';
	numberr = 'a';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}
	while (numberr <= 'f')
	{
		putchar(numberr);
		numberr++;
	}
	putchar('\n');

	return (0);
}
