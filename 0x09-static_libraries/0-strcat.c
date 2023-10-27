#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: string that will be added
*
* Return: concated string
*/

char *_strcat(char *dest, char *src)
{

	int destLen = strlen(dest);

	int i;


	for (i = 0; src[i]; i++)
	{

	dest[destLen + i] = src[i];

	}


	return (dest);

}
