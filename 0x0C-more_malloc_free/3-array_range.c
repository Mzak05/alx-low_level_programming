#include "main.h"
#include <stdlib.h>
/**
 * *array_range - info
 * @min: data
 * @max: data
 * Return: return
*/
int *array_range(int min, int max)
{
int i;
int s;
int *e;
if (min > max)
{
return (NULL);
}
s = max - min + 1;
e = malloc(s * sizeof(int));
if (e == NULL)
{
return (NULL);
}
for (i = 0; i <= s; i++)
{
e[i] = min;
min++;
}
return (e);
}
