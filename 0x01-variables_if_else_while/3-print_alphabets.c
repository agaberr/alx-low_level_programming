#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the alphabet in lowercase
 * then upper case followed by a new line using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char alpha =  'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	alpha = 'A';

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
