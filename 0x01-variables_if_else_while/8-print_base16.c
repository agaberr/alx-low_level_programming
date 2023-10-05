#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the numbers of base
 * 16 followed by a new line using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char alpha =  'a', num = 48;

	while (num <= (48 + 9))
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
