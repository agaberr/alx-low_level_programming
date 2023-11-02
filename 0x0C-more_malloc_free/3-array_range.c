#include "main.h"

/**
* array_range - creates an array of integers
* @min: min value in array
* @max: max value in array
*
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{

	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; min <= max; i++)
	{

		ptr[i] = min;
		min++;

	}

	return (ptr);

}
