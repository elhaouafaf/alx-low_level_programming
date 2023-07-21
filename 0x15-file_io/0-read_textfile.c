#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- convert fonction.
 * @filename: file to be read
 * @letters: letters number read
 * Return: 0 dima
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t w;
ssize_t num_by;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (!buffer)
return (0);
num_by = read(fd, buffer, letters);
if (num_by == -1)
{
free(buffer);
return (0);
}
w = write(STDOUT_FILENO, buffer, num_by);
free(buffer);
close(fd);
return (w);
}
