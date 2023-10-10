#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: return the last digit of a number
 * @n: the number given
 *
 * Return: the last digit of a number
*/

int print_last_digit(int n)
{

	int digit = 0;

	if (n < 0)
	{
		digit = -1 * (n % 10);
	}
	else
		digit = n % 10;

	_putchar(digit + '0');
	return (digit);

}
