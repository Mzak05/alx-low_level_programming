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
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
