#include "main.h"

/**
* _strpbrk - locates the first occurence in the string
* s of any of the bytes in the string accept
* @s: string to be scanned
* @accept: string containing characters to match
*
* Return: pointer to the byte in s that
* matches on to of bytes in accept, NULL otherwise
*/

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
			{
				s += i;
				return (s);
			}

	return (NULL);

}
