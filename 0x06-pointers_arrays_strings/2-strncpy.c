#include "main.h"

/**
* _strncpy - copy string to destination two strings
* @dest: destination string
* @src: string to copy
* @n: char numbers to be copied
*
* Return: concated string
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;


	for (i = 0; i < n && src[i]; i++)
	{

	dest[i] = src[i];

	}

	if (i < n)
		dest[i] = '\0';

	return (dest);

}
