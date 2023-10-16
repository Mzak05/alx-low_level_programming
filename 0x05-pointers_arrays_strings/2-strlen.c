#include <stdio.h>
#include <string.h>
/**
* _strlen - give length
* @s: pointer
* Return: length
*/
int _strlen(char *s)
{
int i;
int c;
c = 0;
for (i = 0; *s != '\0'; s++)
{
c++;
}
return (c);
}
