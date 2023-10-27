#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: Check if char is lowercase or not
 * @c: the char that will be checked
 *
 * Return: 1 if char is lower, 0 otherwise
*/

int _islower(int c)
{

	if (islower(c) == 0)
		return (0);
	else
		return (1);

}
