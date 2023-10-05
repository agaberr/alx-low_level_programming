#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations
 * of single-digit number followed by ,
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 48;

	while (num <= (48 + 9))
	{
		putchar(num);
		if (num == (48 + 9))
			break;
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');

	return (0);
}
