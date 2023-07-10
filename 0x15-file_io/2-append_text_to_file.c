#include "main.h"
#include <string.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: String to add
*
* Return: Failure or filename is NULL -1
* If file does not exist or user lacks write permissions -1
* Otherwise 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file;
size_t string;
ssize_t w;
if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
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
