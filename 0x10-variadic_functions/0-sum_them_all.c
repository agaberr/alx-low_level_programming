#include "variadic_functions.h"

/**
* sum_them_all - return sum of all its parameters
* @n: number of params
*
* Return: Sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;

	va_list ptr;

	if (n <= 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);

}
