#include <stdio.h>
/**
* print_to_98 - print to 98
* @n: parametrer that's used
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
