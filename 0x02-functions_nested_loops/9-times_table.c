#include "main.h"
/**
* times_table - prints time table
*/
void times_table(void)
{
int i;
int j;
int a;
for (i = 0; i < 10 ; i++)
{
for (j = 0; j <= 9 ; j++)
{
a = i * j;
if (j == 0)
{
_putchar(a + '0');
}
else
{
_putchar(' ');
_putchar(a + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
