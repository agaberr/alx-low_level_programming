#include "main.h"

/**
* countWords - count number of words in string
* @s: string
*
* Return: number of words
*/

int countWords(char *s)
{
	int i, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (i == 0)
			num++;
		else if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				num++;
		}
	}
	num++;
	return (num);
}

/**
* strtow -  splits a string into words.
* @str: string to split
*
* Return: splitted string
*/


char **strtow(char *str)
{
	int i, j, k, l, countwords = 0, size = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	countwords = countWords(str);
	if (countwords == 1)
		return (NULL);
	ptr = malloc(countwords * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[countwords - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ptr[size] = malloc(j * sizeof(char));
			j--;
			if (ptr[size] == NULL)
			{
				for (k = 0; k < size; k++)
					free(ptr[k]);
				free(ptr[countwords - 1]);
				free(ptr);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				ptr[size][l] = str[i + l];
			ptr[size][l] = '\0';
			size++;
			i += j;
		}
		else
			i++;
	}
	return (ptr);
}
