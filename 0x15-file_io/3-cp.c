#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
* main - Copies the contents of a file to another file
* @argc: The number of arguments
* @argv: An array
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int s_fd;
	int d_fd;
	char *buff[BUFF_SIZE];
	ssize_t w;
	ssize_t r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s_fd = open(argv[1], O_RDONLY);
	if (s_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (d_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(s_fd, buff, BUFF_SIZE)) > 0)
	{
		w = write(d_fd, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(s_fd);
	close(d_fd);
	exit(0);
}
