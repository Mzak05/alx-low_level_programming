#include "main.h"
#include <stdio.h>
/**
* *_strpbrk - give pointer
* @s: pointer
* @accept: variable
* Return: value
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
else
{
break;
}
}
return (NULL);
}
