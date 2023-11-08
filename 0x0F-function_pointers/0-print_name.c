#include "function_pointers.h"

/**
* print_name: Calls a function that prints name
* @name: string to print
* @f: function to call
*
* Return: None
*/



void print_name(char *name, void (*f)(char *))
{

	void (*ptr)(char (*));

	ptr = f;

	if (!ptr || !name)
		return (NULL);

	ptr(name);

}
