#include <stdlib.h>
#include <stdio.h>
/**
 * *array_range - info
 * @min: data
 * @max: data
 * Return: return
*/
int *array_range(int min, int max) {
int i;
int s;
int *a;
s = max - min + 1;
a = malloc(s * sizeof(int));
if (min > max)
{
return (NULL);
}
if (a == NULL) {
return (NULL);
}
for (i = 0; i <= s + 1; i++)
{
a[i] = min + i;
}
return (a);
}

