#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file prints it to Standard output
 * @filename: text file
 * @letters: number of letters
 * Return: actual number of letters read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int file;
	ssize_t w;
	ssize_t r;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buff = (char *)malloc(sizeof(char) * (letters + 1));
	r = read(file, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(file);
	return (w);
}
