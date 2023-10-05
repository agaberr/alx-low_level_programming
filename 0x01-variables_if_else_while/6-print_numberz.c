#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints digits from 0 to 9
 * using printchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
