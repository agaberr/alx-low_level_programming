#include "main.h"

/**
* _memcpy - Copy n bytes from src to dest
* @dest: destination of the copy
* @src: source of the copy
* @n: number of bytes to copy
*
* Return: pointer to string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
