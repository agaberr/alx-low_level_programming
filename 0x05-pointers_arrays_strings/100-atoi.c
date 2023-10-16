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

	int negFlag = 0, val = 0;

	do {
		if (*s == '-')
			negFlag = 1;
		else if (*s >= 48 && *s <= (48 + 9))
		{
			val = (*s - 48) + (val * 10);
		}
		else if (val > 0)
			break;



	} while (*s++);

	if (negFlag == 1)
		return (val * -1);
	else
		return (val);


}
