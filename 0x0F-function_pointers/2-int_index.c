#include "function_pointers.h"
/**
* int_index - info
* @array: info
* @size: info
* @cmp: info
* Return: return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <=0 || array == NULL || cmp == NULL)
{
return (-1);
}
i = 0;
while( i < size)
{
if (cmp(array[i] == 1)
{
return (i);
}
i++;
}
return (-1);
}
