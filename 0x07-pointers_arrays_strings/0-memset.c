#include "main.h"

/**
* _memset - Copy char b and put it n times in s
* @s: string to be changed
* @b: character to be changed by
* @n: number of times b is added to s
*
* Return: pointer to string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
