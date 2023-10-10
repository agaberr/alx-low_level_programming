#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: return the abs of the number
 * @n: the number that need absolute value
 *
 * Return: The absolute of the number
*/

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);

}
