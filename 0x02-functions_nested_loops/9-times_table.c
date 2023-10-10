#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: print the 9 times table starting
 * with 0
 *
 *
 * Return: nothing
*/

void times_table(void)
{

	int i = 0, j = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%2d, ", (i * j));
		}
		_putchar('\n');
	}

}
