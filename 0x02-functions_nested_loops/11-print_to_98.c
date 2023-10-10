#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: prints from n to 98
 * @n: number to print from
 *
 * Return: nothing
*/

void print_to_98(int n)
{

	while (n != 98)
	{

		printf("%d, ", n);

		if (n < 98)
			n++;
		else
			n--;

	}
	printf("98\n");
}
