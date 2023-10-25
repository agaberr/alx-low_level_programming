#include "main.h"

/**
* _print_rev_recursion - prints string reversed followed by a new line
* @s: string to print
*
* Return: None;
*/

void print_no_newline(char *s);
void _print_rev_recursion(char *s)
{

	print_no_newline(*s);
	_putchar('\n');

}

/**
* print_no_newline - prints string reversed followed
* @s: string to print
*
* Return: None;
*/

void print_no_newline(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}


