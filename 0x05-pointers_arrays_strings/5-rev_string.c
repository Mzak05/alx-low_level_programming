#include "main.h"
/**
* rev_string - give reverse
* @s: pointer
*/
void rev_string(char *s)
{
int i;
int c;
char o;
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (i = c - 1; i >= 0; i--)
{
o = s[i];
s[i] = s[o - i - 1];
s[o - i - 1] = o;
}
}
