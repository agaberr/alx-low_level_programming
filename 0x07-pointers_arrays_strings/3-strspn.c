#include "main.h"

/**
* _strspn - return number of bytes int the initial
* segment of s which consist only of bytes from accept
* @s: string to be scanned
* @accept: string containing characters to match
*
* Return: number of bytes int the initial
* segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0;

	while (*s != '\0')
	{
		if (!strchr(accept, *s))
			break;

		i++;
		s++;
	}

	return (i);

}
