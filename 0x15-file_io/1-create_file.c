#include "main.h"
#include <string.h>

/**
* create_file - Creates a file
* @filename: Name of the file to create
* @text_content: A string to write to the file
*
* Return: If the function fails -1
* Otherwise 1
*/
int create_file(const char *filename, char *text_content)
{
int file;
size_t string;
ssize_t w;
if (filename == NULL)
return (-1);

file = creat(filename, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);
if (text_content != NULL)
{
string = strlen(text_content);
w = write(file, text_content, string);
if (w == -1)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}
