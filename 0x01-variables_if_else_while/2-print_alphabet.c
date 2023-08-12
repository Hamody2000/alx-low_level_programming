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

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
