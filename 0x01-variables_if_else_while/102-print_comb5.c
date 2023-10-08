#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible combinations
 * of two two-digit numbers
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	int combination1 = 0, combination2 = 0;

	while (combination1 <= 99)
	{
		while (combination2 <= 99)
		{
			if (combination1 != combination2)
			{
				putchar((combination1 / 10) + 48);
				putchar((combination1 % 10) + 48);
				putchar(' ');
				putchar((combination2 / 10) + 48);
				putchar((combination2 % 10) + 48);
				if (combination1 == 98 && combination2 == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			combination2++;
		}
		combination2 = 0;
		combination1++;
	}


	putchar('\n');

	return (0);
}
