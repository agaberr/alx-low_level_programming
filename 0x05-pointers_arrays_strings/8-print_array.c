#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: number of elements added
 *
 */

void print_array(int *a, int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);

		if (i + 1 >= n)
			printf("%d\n", a[i]);
	}

}
