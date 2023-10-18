#include "main.h"

/**
* print_number - print number using _putchar only
* @n: numbre to print
*
* Return: encoded string
*/

void print_number(int n)
{

	unsigned int ans = n;

	if (n < 0)
	{
		_putchar('-');
		ans = 0 - n;
	}

	if ((ans / 10) > 0)
		print_number(ans / 10);

	_putchar((ans % 10) + '0');

}
