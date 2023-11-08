#include "function_pointers.h"

/**
* int_index - Calls a function that prints name
* @array: array contain values
* @size: number of elements in array
* @cmp: pointer to the function to be used to compare values
*
* Return: index of the first element for which
* the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	int (*ptr)(int);

	if (array != NULL && cmp != NULL)
	{

		if (size <= 0)
			return (-1);

		ptr = cmp;


		for (i = 0; i < size; i++)
		{
			if (ptr(array[i]))
				return (i);
		}

		return (-1);

	}

	return (-1);

}
