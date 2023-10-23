#include "main.h"

/**
* _strstr -  finds the first occurrence of the
* substring needle in the string haystack
* @haystack: string to look into
* @needle: string to look for
*
* Return: None
*/

char *_strstr(char *haystack, char *needle)
{
	/*
	* if (*needle == '\0')
	*    return (haystack);
	*/

	while (*haystack)
	{
		char *hay = haystack, *need = needle;

		while (*hay == *need && *hay != '\0' && *need != '\0')
		{
			hay++;
			need++;
		}

		if (*need == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
