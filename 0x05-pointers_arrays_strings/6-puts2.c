#include "main.h"
/**
* puts2 - give length
* @str: pointer
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i = i + 2)
{
if (str[i] != '\0')
{
_putchar(str[i]);
}
}
_putchar('\n');
}