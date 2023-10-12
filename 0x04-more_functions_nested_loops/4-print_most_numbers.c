#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: print numbers form 0 to 9 excluding 2 and 4
 *
 * Return: None
*/


void print_most_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != (2 + 48) && i != (4 + 48))
			_putchar(i);
	}
	_putchar('\n');
}
