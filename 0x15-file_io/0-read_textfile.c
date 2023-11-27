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
	ssize_t w_bytes, bytes;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	char *buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes = fread(buffer, 1, letters, file);

	if (bytes < 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes] = '\0';

	w_bytes = fwrite(buffer, 1, letters, stdout);

	if (w_bytes < 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (bytes);
}
