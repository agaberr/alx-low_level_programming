#include "main.h"

/**
 * _strlen - return length of string
 * @s: string input
 *
 * Return: length of str
 *
 */

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
