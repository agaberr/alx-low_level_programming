#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{

	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	char *rev;

	while (i >= 0)
	{

		rev[j] = s[i];
		i--;
		j++;

	}

	s = rev;

}
