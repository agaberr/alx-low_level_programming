#include "main.h"

/**
* _print_rev_recursion - prints string reversed followed by a new line
* @s: string to print
*
* Return: None;
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(++s);
		_putchar(*s);
	}

}
