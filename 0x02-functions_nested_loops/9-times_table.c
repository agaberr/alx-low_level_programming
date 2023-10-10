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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				printf("%d", (i * j));
			else if (j == 9)
				printf("%2d", (i * j));
			else
				printf("%2d, ", (i * j));

		}
		printf("\n");
	}

}
