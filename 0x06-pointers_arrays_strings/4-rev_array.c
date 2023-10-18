#include "main.h"

/**
* reverse_array - compare two strings
* @a: array of numbers
* @n: number of elements
*
* Return: None
*/

void reverse_array(int *a, int n)
{
	int b[n];

	int i;

	for (i = 0; i < n; i++)
		b[i] = a[n - i - 1];

	for (i = 0; i < n; i++)
		a[i] = b[i];

}
