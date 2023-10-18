#include "main.h"
/**
* _strcmp - compares
* @s1: pointer
* @s2: pointer
* Return: data
*/
int _strcmp(char *s1, char *s2) {
for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return s1[i] - s2[i];
}
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return 0;
}
else if (s1[i] == '\0')
{
return -s2[i];
}
else
{
return s1[i];
}
}
