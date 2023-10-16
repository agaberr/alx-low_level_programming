#include "main.h"

/**
 * puts_half - print other half of string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	int j = 0;

	for (j = 0; j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
