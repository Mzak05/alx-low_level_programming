#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - info
* @s: info
* Return: info
*/
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{ "-", op_sub },
{ "+", op_add },
{ "/", op_div },
{ "*", op_mul },
{ "%", op_mod },
{ NULL, NULL }
};
for(i = 0; i < 5; i++)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
}
return (0);
}
