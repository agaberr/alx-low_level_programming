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
	int n = 0;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
