#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char cPass;
	int summation;

	srand(time(NULL));

	while (summation < 2646)
	{

		cPass = rand() % 128;
		summation += cPass;
		printf("%c", cPass);

	}

	printf("%c", 2772 - summation);

	return (0);
}
