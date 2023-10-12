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

	int i, j, space = 0;
	
	for (i = 0; i < n; i++)
	{
	
		for (j = 0; j < space; j++)
		{
			_putchar(' ');
		}
		space++;
		_putchar('\\');
		_putchar('\n');
	}

}
