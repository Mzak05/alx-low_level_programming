#include "main.h"
/**
 * create_file - info
 * @filename: info
 * @text_content: info
 * Return: info
 */
int create_file(const char *filename, char *text_content)
{
int ff, x, count = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (count = 0; text_content[count];)
count++;
}
ff = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(ff, text_content, count);
if (ff == -1 || x == -1)
return (-1);
close(ff);
return (1);
}
