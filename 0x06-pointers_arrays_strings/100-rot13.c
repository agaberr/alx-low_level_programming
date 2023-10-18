#include "main.h"

/**
* rot13 - encodes a string using rot13
* @str: string to encode
*
* Return: encoded string
*/

char *rot13(char *str)
{

	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int i, j;

	for (i = 0; str[i]; i++)
		for (j = 0; alphabet[j]; j++)
			if (str[i] == alphabet[j])
				str[i] = (alphabet[(j + 13) % 26]);
			else if (str[i] == toupper(alphabet[j]))
				str[i] = (toupper(alphabet[(j + 13) % 26]));

	return (str);
}
