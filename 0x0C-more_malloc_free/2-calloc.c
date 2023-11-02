#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: element to add in array
* @size: size of array
*
* Return: returns a pointer to the allocated memory or NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = nmemb;
	}

	return (ptr);


}
