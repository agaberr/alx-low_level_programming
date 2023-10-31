#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if size = 0 & pointer to the array, or NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{

	unsigned int size1 = 0, size2 = 0, i;

	char *ptr;

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	ptr = malloc(sizeof(char) * (size1 + size2));

	if (!size1 || !size2 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	while (i < size1 + size2)
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}

	return (ptr);

}
