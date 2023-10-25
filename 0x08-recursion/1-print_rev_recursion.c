#include "main.h"
/**
* _print_rev_recursion - give n values
* @s: pointer
*/
void _print_rev_recursion(char *s)
{
int i;
int c; 
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[c-i]);
}
}
