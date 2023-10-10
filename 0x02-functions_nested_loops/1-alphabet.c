#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print all the alphabets
 * using _putchar function
 *
 *
 * Return: nothing
*/


void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
