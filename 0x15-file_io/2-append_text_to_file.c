#include "main.h"
/**
 * append_text_to_file - text at the end lfile.
 * @filename: pointerdyal lfile.
 * @text_content: string of file.
 * Return: If not ok -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int len = 0;
if (!filename)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
while (text_content && text_content[len])
len++;
write(fd, text_content, len);
close(fd);
return (1);
}
