#include "main.h"
/**
* _strcmp - compares
* @s1: pointer
* @s2: pointer
* Return: data
*/
int _strcmp(char *s1, char *s2)
{
int i;
int j;
int c;
int a;
for (i = 0; s1[i] != '\0'; i++)
{
a++;
}
for (j = 0; s2[j] != '\0'; j++)
{
c++;
}
if (a > c)
{
return (15);
}
else if (c > a)
{
return (-15);
}
else
{
return (0);
}
}
