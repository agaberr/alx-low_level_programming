#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: This function checks for digits
 * @c: character to be checked
 *
 * Return: 1 if number, 0 otherwise
*/

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
