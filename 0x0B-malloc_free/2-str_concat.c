#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* *str_concat - give data
* @s1:  str
* @s2: s2
* Return: return
*/
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL && s2 != NULL)
{
return (s2);
}
else if (s1 != NULL && s2 == NULL)
{
return (s1);
}
else if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else
{
int a = strlen(s1);
int b = strlen(s2);
int total = a + b;
char *re = (char *)malloc((total + 1) * sizeof(char));
if (re == NULL)
{
return (NULL);
}
strcpy(re, s1);
strcat(re, s2);
return (re);
}
return (NULL);
}
