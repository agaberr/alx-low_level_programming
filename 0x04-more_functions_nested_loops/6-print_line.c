#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: draws straight lines
 * @n: number of times _ should be printed
 * Return: None
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
