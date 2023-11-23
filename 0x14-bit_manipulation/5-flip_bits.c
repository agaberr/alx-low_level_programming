#include "main.h"
/**
* flip_bits - function that returns the number of bits you would
* need to flip to get from one number to another
* @n: first number
* @m: second number
*
* Return: the number of bits you would need
* to flip to get from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor, ans = 0;

	xor = n ^ m;

	while (xor > 0)
	{
		ans += xor & 1;
		xor >>= 1;
	}

	return (ans);

}
