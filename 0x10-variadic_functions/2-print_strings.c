#include "variadic_functions.h"

/**
* print_strings -  prints strings, followed by a new line
* @separator: string to be printed between strings
* @n: number of params
* @...: string to print
*
* Return: None
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	char *str;

	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(ptr,  char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("%s\n", va_arg(ptr, char *));

	va_end(ptr);

}
