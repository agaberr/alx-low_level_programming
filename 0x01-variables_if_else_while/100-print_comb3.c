#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different
 * combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num1 = 48, num2 = 48;

	while (num1 < (48 + 9))
	{
		if (num1 < num2)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == (48 + 8))
				break;
			putchar(',');
			putchar(' ');
		}
		num2++;
		if (num2 > (48 + 9))
		{
			num1++;
			num2 = 48;
		}
	}

	putchar('\n');

	return (0);

}
