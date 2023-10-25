#include "main.h"
/**
* _sqrt_recursion - give sqrt
* @n: number
* Return: value
*/
int _sql(int n, int a)
{
if (a * a == n)
{
return a;
}
else if (a * a > n)
{
return -1;
}
return _sql(n, a + 1);
}
int _sqrt_recursion(int n)
{
return _sql(n, 1);
}
