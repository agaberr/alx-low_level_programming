#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: print a diagonal
 * @n: number of times a diagonal should print
 *
 * Return: None
*/

void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{

		for (i = 1; i <= n; i++)
		{

			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
