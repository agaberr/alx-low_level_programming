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

	long long n1 = 1, n2 = 2;

	printf("%lld, %lld, ", n1, n2);

	int it;

	for (it = 0; it < 48; it++)
	{
		long long sum = n1 + n2;

		if (it == 47)
			printf("%lld", sum);
		else
			printf("%lld, ", sum);
		n1 = n2;
		n2 = sum;

	}
	printf("\n");

	return (0);

}
