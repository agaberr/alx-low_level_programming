#include "main.h"
#include <string.h>

/**
 * puts_half - print other half of string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{

	int len = strlen(str);
	int n = 0, j;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 2) / 2;
	}

	for (j = n; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
