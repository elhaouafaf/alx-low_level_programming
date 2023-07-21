#include "main.h"
/**
 * create_file - fonc li katcreati lfile.
 * @filename: lpointer dyal l fil.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If fail -1 if not 1
 */
int create_file(const char *filename, char *text_content)
{
int fd, af, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
af = write(fd, text_content, len);
if (fd == -1 || af == -1)
return (-1);
close(fd);
return (1);
}
