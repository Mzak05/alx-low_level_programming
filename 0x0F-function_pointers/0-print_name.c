#include "function_pointers.h"
#include<stdlib.h>
/**
* print_name - info
* @name: info
* @f: info
* Return: return
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
