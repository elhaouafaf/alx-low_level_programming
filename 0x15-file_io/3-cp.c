#include "main.h"
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - 1024 byte flbuffer.
 * @file: saving in
 * Return: to al buf.
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}
/**
** close_file - fonction dyal close file
 * @fd: inpute dyal had void foncction.
*/

void close_file(int fd)
{
int cfc;

cfc = close(fd);

if (cfc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
** main - kaycopies li fl file.
 * @argc: numb arguments.
 * @argv: array dyal pointer.
 * Return: ila kolchi ok
 * Description: ila largument count is ok - exit code 97.
*/
int main(int argc, char *argv[])
{
int from, to, rrt, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
rr = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || rrt == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, rrt);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

rrt = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (rrt > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
