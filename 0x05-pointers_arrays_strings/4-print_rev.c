#include "main.h"
/**
* print_rev - give reverse
* @s: pointer
*/
void _puts(char *s)
{
int i;
int c;
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
