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

	int num1, num2;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);

	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", (num1) * (num2));

	return (0);

}
