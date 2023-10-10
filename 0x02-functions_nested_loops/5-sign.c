#include "main.h"
/**
* _isalpha - checks if lowercase or upercase
* @c: parametrer that translates characters to their ASCII form
* Return: 1 if true and 0 if false
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
