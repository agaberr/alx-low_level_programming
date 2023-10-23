#include "main.h"

/**
* _pow_recursion - raise x to the power of y
* @x: base number
* @y: power
*
* Return: x to power of y, -1 if y < 0
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
