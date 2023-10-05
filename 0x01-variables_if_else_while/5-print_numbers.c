#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print digits from 0
 * to 9 followed by a new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
