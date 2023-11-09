#include "variadic_functions.h"
#include <stdarg.h>
/*
* sum_them_all - info
* @n: data
* @...: infos
* Return: return
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int result;
int params[n];
result = 0;
if (n == 0)
{
return (0);
}
va_start[args, n];
for (i = 0; i < n; i++){
params[i] = va_arg(args, int);
}
va_end(args);
for (i = 0; i < n; i++)
{
result += params[i];
}
return (result);
}
