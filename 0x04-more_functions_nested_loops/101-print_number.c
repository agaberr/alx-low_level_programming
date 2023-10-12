#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: print numbers using _putchar
 * @n: number to be printed
 *
 * Return: None
*/

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = 0 - n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
