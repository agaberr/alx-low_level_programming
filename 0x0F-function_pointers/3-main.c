#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: number of args
* @argv: array contain args
*
* Return: Always 0 (success)
*/

int (*get_op_func(char *s))(int, int);

int main(int argc, char *argv[])
{

	int a, b, result;

	char *operator;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);

	operator = argv[2];

	b = atoi(argv[3]);

	op_func = get_op_func(operator);
	result = op_func(a, b);

	printf("%d\n", result);

	return (0);
}
