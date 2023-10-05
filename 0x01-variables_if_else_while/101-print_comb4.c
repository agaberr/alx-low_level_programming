#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different
 * combinations of three digits
 *
 * Return: Always 0 (success)
*/


int main(void)
{
	int num1 = 48, num2 = 48, num3 = 48;

	while (num1 < (48 + 9))
	{
		if (num1 < num2 && num2 < num3)
		{
			putchar(num1);
			putchar(num2);
			putchar(num3);
			if (num1 == (48 + 7))
				break;
			putchar(',');
			putchar(' ');
		}
		num3++;

		if (num3 > (48 + 9))
		{
			num2++;
			num3 = 48;
		}

		if (num2 > (48 + 8))
		{
			num1++;
			num2 = 48;
			num3 = 48;
		}
	}

	putchar('\n');




	return (0);
}
