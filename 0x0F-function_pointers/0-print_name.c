#include "function_pointers.h"

/**
* print_name - Calls a function that prints name
* @name: string to print
* @f: function to call
*
* Return: None
*/

void print_name(char *name, void (*f)(char *))
{

	if (!name || !f)
		return (NULL);

	void (*ptr)(char (*));

	ptr = f;
	ptr(name);

}
