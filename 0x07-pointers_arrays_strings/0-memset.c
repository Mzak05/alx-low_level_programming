include "main.h"
/**
* *_memset - give n values
* @s: pointer
* @b: variable
* @n: second variable
* Return: value
*/
char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; i < n; i++)
{
*s++ = b;
}
char *r = s;
return (*r);
}
