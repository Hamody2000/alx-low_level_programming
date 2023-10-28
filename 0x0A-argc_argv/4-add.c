#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name
 * @argc: number
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
			if (*x < '0' || *x > '9')
				return (printf("Error\n", 1));
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
