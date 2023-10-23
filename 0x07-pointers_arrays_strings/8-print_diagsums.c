#include "main.h"
#include <stdio.h>
/**
* print_diagsums - print diagram
* @size: size
* @a: pointer
*/
void print_diagsums(int *a, int size)
{
int s;
int i;
int ss;
s = 0;
ss = 0;
for (i = 0; i < 8; i++)
{
s = s + a[i * size + i];
ss = ss + a[i * size + (size - 1 - i)];
}
printf("sum 1 :%d, sum2: %d\n", s, ss);
}
