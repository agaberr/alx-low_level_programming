#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the alphabet in lowercase
 * reversed followed by a new line using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char alpha =  'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
