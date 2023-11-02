#include <stdlib.h>
/**
 * *_calloc - info
 * @nmemb: data
 * @size: data
 * Return: return
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *r;
unsigned int t;
unsigned int i;
if (num == 0 || elementSize == 0)
return (NULL);
t = num * elementSize;
r = malloc(t);
if (r == NULL)
return (NULL);
for (i = 0; i < t; i++)
{
r[i] = 0;
}
return (r);
}
