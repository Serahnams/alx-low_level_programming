#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

char *generate_buff(char *fl);
void close_file(int fd);

/**
* generate_buff - creates a buffer
* @fl: file
*
* Return: A pointer to buffer
*/
char *generate_buff(char *fl)
{
char *buff;
buff = malloc(sizeof(char) * BUFF_SIZE);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Cant write to %s\n", fl);
exit(99);
}
return (buff);
}

/**
* close_file - closes file
* @fd: file to close
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

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
char *buff;
ssize_t w;
ssize_t r;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = generate_buff(argv[2]);
s_fd = open(argv[1], O_RDONLY);
r = read(s_fd, buff, BUFF_SIZE);
d_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
do {
if (s_fd == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
w = write(d_fd, buff, r);
if (d_fd == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
r = read(s_fd, buff, BUFF_SIZE);
d_fd = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buff);
close(s_fd);
close(d_fd);
exit(0);
}
