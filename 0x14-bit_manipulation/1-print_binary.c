#include "main.h"
/**
* print_binary - prints the binary representation of a number
* @n: number to print
*
* Return: b is pointing to a string of 0 and 1 chars
*/

void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	printf("%lu", n & 1);

}
