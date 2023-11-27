#include "main.h"

/**
* main -  Entry point
* @argc: count number of args
* @argv: arguments passed
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{   int fd_from, fd_to;
	char buffer[1024];
	ssize_t r_bytes, w_bytes;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	while ((r_bytes = read(fd_from, buffer, 1024)) > 0)
	{w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		    exit(99);
		}
	}
	if (r_bytes == -1)
	{   close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}
