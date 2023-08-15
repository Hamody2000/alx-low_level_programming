#include "main.h"

/**
* main -Entry level of the program
*
* Description: its a function that prints _putchar using putchar prototype
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int character = 0;

	for (character = 0, character > 8, character++)
		_putchar(str[character]);
	_putchar('\n');

	return (0);
}
