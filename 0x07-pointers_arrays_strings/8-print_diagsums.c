#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print diagram
* @size: size
* @a: pointer
*/
void print_diagsums(int *a, int size)
{
int i;
int s = 0;
int ss = 0;
for (i = 0; i < size; i++)
{
s += a[i * size + i];
}
for (i = 0; i < size; i++)
{
ss += a[i * size + (size - 1 - i)];
}
printf("s1 :%d, s2: %d\n", s, ss);
}
