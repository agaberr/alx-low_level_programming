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

	for (int i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');



}
