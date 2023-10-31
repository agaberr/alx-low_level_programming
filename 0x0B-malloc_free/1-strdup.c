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

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}


	ptr = malloc(sizeof(char) * size + 1);

	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
