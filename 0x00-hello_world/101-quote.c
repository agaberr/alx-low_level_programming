#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a msg to STDOUT & STDERR
 *
 * Return: always 1 (sucess)
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
