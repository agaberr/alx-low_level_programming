#include "main.h"

/**
* string_toupper - change all lowercase to upper
* @str: string
*
* Return: None
*/

char *string_toupper(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
		str[i] = toupper(str[i]);

	return (str);

}
