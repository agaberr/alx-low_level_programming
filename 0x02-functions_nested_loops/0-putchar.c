#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print _putchar, followed
 * by a new line
 *
 * Return: Always 0 (success)
*/


int main(void)
{

	char word[] = "_putchar";
	int wordSize = sizeof(word) / sizeof(word[0]);

	int i = 0;

	while (i < wordSize-1)
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
