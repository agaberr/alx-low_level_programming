#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index
* @index: index starting from zero
* @n: number
*
* Return: the value of a bit at a given index
*/

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	*n &= ~(1 << index);

	return (1);

}
