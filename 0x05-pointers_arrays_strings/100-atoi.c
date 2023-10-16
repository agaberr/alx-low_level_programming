#include "main.h"
#include <string.h>

/**
 * _atoi - convert string into int
 * @s: string to be converted
 *
 * Return: integer after converstion
 */

int _atoi(char *s)
{

	int i = 0, negFlag = 0, val = 0;
	int len = strlen(s);

	/* check if  empty */
	if (len == 0)
		return (0);

	/* check for negetive */
	if (s[0] == '-')
	{
		negFlag = 1;
		len--;
	}

	for (i = 0; i < len; i++)
	{

		if (negFlag == 1)
			i++;

		val += (s[i] - 48) * (10 * (len));

	}

	if (negFlag == 1)
		return (-1 * val);
	else
		return (val);

}
