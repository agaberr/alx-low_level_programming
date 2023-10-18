#include "main.h"

/**
* rot13 - encodes a string using rot13
* @str: string to encode
*
* Return: encoded string
*/

char *rot13(char *str)
{

	char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot13Alpha[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	int i, j;

	for (i = 0; str[i]; i++)
		for (j = 0; alphabet[j]; j++)
			if (str[i] == alphabet[j])
			{
				str[i] = (rot13Alpha[j]);
				break;
			}

	return (str);
}
