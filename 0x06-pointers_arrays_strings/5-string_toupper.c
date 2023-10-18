#include "main.h"
/**
* *string_toupper - give upper
* @c:pointer
* Return: result
*/
char *string_toupper(char *c)
{
int i;
char d[100];
char r;
for (i = 0; c[i] != '\0'; i++)
{
r = c[i] - 32
d[i] = r;
}
d[i] = '\0';
return (d);
}
