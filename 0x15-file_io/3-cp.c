#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - 1024 byte flbuffer.
 * @file: saving in
 * Return: to al buf.
 */
char *create_buffer(char *file)
{
char *buf;
buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buf);
}
/**
 * close_file - kayclosi lfile
 * @fd: to close.
 */
void close_file(int fd)
{
int cf;
cf = close(fd);
if (cf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - kaycopies li fl file.
 * @argc: numb argument.
 * @argv: array lpoint
 * Return: 0 if ok.
 * Description: If the argument count is incorrect exit code 97.
 * ila file_from makanch exit code 98.
 * ila file_to akanch exit code 99.
 * ila file_to or file_from matsedchexit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, re, w;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
re = read(from, buf, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || re == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
w = write(to, buf, re);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
re = read(from, buf, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (re > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
