#include "main.h"
/**
 * append_text_to_file - text at the end lfile.
 * @filename: pointerdyal lfile.
 * @text_content: string of file.
 * Return: If not ok -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int of, wri, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
of = open(filename, O_WRONLY | O_APPEND);
wri = write(of, text_content, len);
if (of == -1 || w == -1)
return (-1);
close(of);
return (1);
}
