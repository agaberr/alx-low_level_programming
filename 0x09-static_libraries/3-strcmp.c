#include "main.h"

/**
* _strcmp - compare two strings
* @s1: string 1
* @s2: string 2
*
* Return: 0 if equal, difference in askii otherwise
*/

int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{

		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);

}
