#include "main.h"

/**
 * _islower - its a function that return 1 if c is lowecase
 */

int _islower(int c)
{
	if ( c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}