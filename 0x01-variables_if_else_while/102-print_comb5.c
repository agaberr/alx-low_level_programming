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

	int num1 = 48, num2 = 48, num3 = 48,  num4 = 48;

	while (num1 <= (48 + 9) && num2 <= (48 + 8))
	{

		if (num2 < num4)
		{
			putchar(num1);
			putchar(num2);
			putchar(' ');
			putchar(num3);
			putchar(num4);
			if (num1 == (48 + 9) && num2 == (48 + 8))
				break;
			putchar(',');
			putchar(' ');
		}

		num4++;

		if (num4 > (48 + 9))
		{
			num4 = 48;
			num3++;
		}
		if (num3 == (48 + 9) && num4 == (48 + 9))
			num2++;
		if (num2 > (48 + 9))
			num1++;
	}

	putchar('\n');

	return (0);
}
