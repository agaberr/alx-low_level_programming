#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the alphabet in lowercase
 * followed by a new line except q and e using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char alpha =  'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' &&  alpha != 'e')
			putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
