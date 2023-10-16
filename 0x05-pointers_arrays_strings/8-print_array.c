#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: number of elements added
 *
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);

		if (i  >= n)
			printf("%d\n", a[i]);
	}

}
