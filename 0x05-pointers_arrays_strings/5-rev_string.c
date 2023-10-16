#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{

	int i = 0, j = 0, temp;
	int n = strlen(s);
	int nMin = n - 1;

	for (i = 0; i < n / 2; i++)
	{

		temp = s[i];
		s[i] = s[nMin - i];
		s[nMin - i] = temp;

	}

}
