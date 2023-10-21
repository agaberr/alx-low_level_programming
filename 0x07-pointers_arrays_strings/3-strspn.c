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

	int count = 0;
	int i, j;

	for (i = 0; accept[i]; i++)
		for (j = 0; s[j] && j != 1000; j++)
			if (accept[i] == s[j])
			{
				count++;
				j = 999;
			}

	return (count);

}
