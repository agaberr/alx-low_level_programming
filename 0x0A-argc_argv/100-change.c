#include "main.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 if success, 1 otherwise
*/

int main(int argc, char *argv[])
{

	int cents, i, c = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		c += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", c);

	return (0);
}
