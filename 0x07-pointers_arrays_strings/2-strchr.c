#include "main.h"

/**
* _strchr - return a pointer to the first occurence of char c in s
* @s: string looking into
* @c: character to look for
*
* Return: pointer to first occurence of c in s or NULL if not found;
*/

char *_strchr(char *s, char c)
{

	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return (NULL);

}
