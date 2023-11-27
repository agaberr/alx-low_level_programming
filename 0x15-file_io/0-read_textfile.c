#include "main.h"

/**
* read_textfile - read a text file and prints it to the POSIX standard output
* @filename: file name provided
* @letters: number of letters to print
*
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ans = 0;
	int file;
	char buffer[1];

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (ans);

	while ((read(file, buffer, 1)) > 0 && ans < (ssize_t)letters)
	{
		ans += write(STDOUT_FILENO, buffer, 1);
	}

	close(file);
	return (ans);

}
