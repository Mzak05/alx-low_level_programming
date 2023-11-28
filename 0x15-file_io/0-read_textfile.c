#include "main.h"
/**
 * read_textfile - info
 * @filename: info
 * @letters: info
 * Return: info
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t ahmed, readus, terra;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
ahmed = open(filename, O_RDONLY);
readus = read(ahmed, buffer, letters);
terra = write(STDOUT_FILENO, buffer, readus);
if (ahmed == -1 || readus == -1 || terra == -1 || terra != readus)
{
free(buffer);
return (0);
}
free(buffer);
close(ahmed);
return (terra);
}
