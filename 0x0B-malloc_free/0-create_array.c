#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char
 * @size: array size
 * @c: character to init the array with
 *
 * Return: NULL if size = 0 & pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr = malloc(sizeof(char) * size);

	if (!size || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
