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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int num = j;

			if (j > 9)
			{
				_putchar('1');
				num = j - 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
