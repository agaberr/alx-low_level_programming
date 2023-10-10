#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of day starting
 * from 00:00 to 23:59
 *
 *
 * Return: nothing
*/

void jack_bauer(void)
{

	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

	while (!(n1 == 2 && n2 == 4 && n3 == 0 && n4 == 0))
	{

		_putchar(n1 + '0');
		_putchar(n2 + '0');
		_putchar(':');
		_putchar(n3 + '0');
		_putchar(n4 + '0');
		_putchar('\n');

		n4++;

		if (n4 == 10)
		{
			n4 = 0;
			n3++;
		}
		if (n3 == 6)
		{
			n3 = 0;
			n2++;
		}
		if (n2 == 10)
		{
			n2 = 0;
			n1++;
		}
	}

}
