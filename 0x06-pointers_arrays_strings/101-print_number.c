#include "main.h"

/**
* print_number - print number using _putchar only
* @n: numbre to print
*
* Return: encoded string
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
