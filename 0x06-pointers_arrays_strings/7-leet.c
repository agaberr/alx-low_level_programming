#include "main.h"

/**
* leet - encode a string into 1337
* @str: string to capitalize
*
* Return: encoded string
*/

char *leet(char *str)
{

	int i, j;

	char letter[] = {'a', 'e', 'o', 't', 'l'};

	char val[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letter[j] || str[i] == (letter[j] - 32))
				str[i] = val[j];
		}

	}

	return (str);

}
