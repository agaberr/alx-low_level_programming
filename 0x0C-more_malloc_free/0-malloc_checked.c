#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{

	int *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);


}
