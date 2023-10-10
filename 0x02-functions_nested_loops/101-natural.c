#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	int sum = 0, num = 0;

	while (num < 1024)
	{

		if (num % 3 == 0 || num % 5 == 0)
			sum += num;

	}

	printf("%d\n", sum);

	return (0);

}
