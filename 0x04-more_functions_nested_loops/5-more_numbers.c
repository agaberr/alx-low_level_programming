#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: print from 0 to 14 10 times
 *
 * Return: None
*/

void more_numbers(void)
{

	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i > 9)
			{
				_putchar('1');
				_putchar((i - 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
	}
	_putchar('\n');

}
