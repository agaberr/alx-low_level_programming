#include "function_pointers.h"

/**
* array_iterator - function that executes a function given
* as a parameter on each element of an array.
* @array: size of array
* @size: size of array
* @action: pointer to function
*
* Return: None
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array != NULL && size != 0 && action != NULL)
	{

		unsigned long int i = 0;

		void (*ptr)(int);

		ptr = action;

		for (i = 0; i < size; i++)
			ptr(array[i]);

	}

}
