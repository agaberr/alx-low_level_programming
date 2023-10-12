#include "main.h"

/**
 * print_triangle - Print a triangle using #
 * @size: size of triangle
 *
 * Return: None
*/

void print_triangle(int size)
{

	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (j = 0; j < size -1 - i; j++)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
