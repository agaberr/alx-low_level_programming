#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* argstostr -  concatenates all the arguments of your program
* @ac: number of arguments
* @av: arguments
*
* Return: Pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{

	int size = 0, i;

	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i  = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}

	ptr = malloc(sizeof(char) * ac * size);

	for (i  = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}

	return (ptr);

}
