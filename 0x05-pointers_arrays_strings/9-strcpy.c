#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @src: source string
 * @dest: destination string
 *
 * Return: dest pointer
 *
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0

	while (src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'

	return (dest);
}
