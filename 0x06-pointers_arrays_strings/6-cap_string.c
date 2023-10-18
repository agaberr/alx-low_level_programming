#include "main.h"

/**
* cap_string - capitalize string
* @str: string to capitalize
*
* Return: capitalized string
*/


char *cap_string(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
	{

		if (str[i + 1] != '\0' && (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '.' || str[i] == '!' || str[i] == '\"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}'))

		{
			str[i + 1] = toupper(str[i + 1]);
		}

	}

	return (str);

}
