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
for (i = 0; *s != '\0'; i++)
{
i++;
}
return (i);
}
