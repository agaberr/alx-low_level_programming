#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: str to copy
 *
 * Return: NULL if str = NULL & pointer to the array, or NULL if it fails
*/

char *_strdup(char *str)
{

	unsigned int size = 0, i;

	char *ptr;

	while (str[size] != '\0')
	{
		size++;
	}

	ptr = malloc(sizeof(char) * size);

	if (!size || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
