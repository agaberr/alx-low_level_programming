#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * Description: Check if char is alpha or not
 * @c: the char that will be checked
 *
 * Return: 1 if char is alpha, 0 otherwise
*/

int _isalpha(int c)
{

	if (isalpha(c) == 0)
		return (0);
	else
		return (1);

}
