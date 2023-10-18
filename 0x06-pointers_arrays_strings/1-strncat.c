#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: string that will be added
* @n: char numbers to be concated
*
* Return: concated string
*/

char *_strncat(char *dest, char *src, int n)
{

	int destLen = strlen(dest);

	int i;


	for (i = 0; i < n && src[i]; i++)
	{

	dest[destLen + i] = src[i];

	}


	return (dest);





}
