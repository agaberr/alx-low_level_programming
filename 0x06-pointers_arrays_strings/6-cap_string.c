#include "main.h"
#include <string.h>


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

		if (i == 0)
		{
			if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = toupper(str[0]);
		}

		if (str[i + 1] != '\0' && (str[i] == ' ' || str[i] == '\t' ||
		str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
		str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '.' || str[i] == '!' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}'))

			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = toupper(str[i + 1]);

	}

	return (str);

}
