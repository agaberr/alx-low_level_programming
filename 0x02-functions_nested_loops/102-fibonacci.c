#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	int n1 = 1, n2 = 2;

	printf("%d, %d, ", n1, n2)

	int i;

	for (i = 0; i < 48; i++)
	{
		int sum = n1 + n2;
		printf("%d, ", sum);
		n1 = n2;
		n2 = sum;

	}
	printf("\n");

	return (0);

}
