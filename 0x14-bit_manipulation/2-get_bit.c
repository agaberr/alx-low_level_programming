#include "main.h"
/**
* get_bit - function that returns the value of a bit at a given index
* @index: index starting from zero
* @n: number
*
* Return: the value of a bit at a given index
*/

int get_bit(unsigned long int n, unsigned int index)
{

	int ans;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	ans = n & (1 << index);

	return (ans ? 1 : 0);

}
