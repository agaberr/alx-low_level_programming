#include "main.h"

/**
 * puts2 - print every othe char of the string
 * @str: string to be printed
 *
 */

void puts2(char *str)
{

	int i = 0;

	while (str[i] != '\0' && str[i - 1] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');



}
