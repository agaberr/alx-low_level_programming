#include "main.h"

/**
* print_diagsums - prints the sum of two diagonals
* of square matrix of the integers
* @a: square matrix of integers
* @size: size of the matrix
*
* Return: None
*/

void print_diagsums(int *a, int size)
{

	int diagonal = 0, inv_diagonal = 0;
	int i;

	for (i = 0; i < size; i++)
	{

		diagonal += a[i + (size * i)];
		inv_diagonal += a[(size - 1) + (size - 1) * i];

	}

	printf("%d, %d\n", diagonal, inv_diagonal);

}
