#include <stdio.h>
/**
* _strlen - give length
* @s: pointer
* Return: length
*/
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
