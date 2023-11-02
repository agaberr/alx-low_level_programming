#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: First string
* @s2: Second string
* @n: number of chars to concat from s2
*
* Return:  returned pointer shall point to a newly allocated space in
* memory, which contains s1, followed by the
* first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int size;

	char *ptr;

	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	size = strlen(s1) + n + 1;
	ptr = malloc(size);

	if (!ptr)
		return (NULL);

	if (n > strlen(s2))
		n = strlen(s2);

	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n && s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);

}
