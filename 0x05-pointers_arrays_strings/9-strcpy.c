#include <stdio.h>
/**
* *_strcpy - give copy
* @dest: pointer
* @src: pointer
* Return: length
*/
int *_strcpy(char *dest, char *src)
{
int i;
int c;
c = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (src);
}
