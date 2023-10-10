#include<stdio.h>
#include <ctype.h>
/**
* main - program that will print a string with puts
* Return: always returns 0 (succes)
*/
int _islower(int c) {
char a;
a=c+'0';
if (islower(a))
{
return (1);
}
else
{
return (0);
}
}
int main(void)
{
int r;

r = _islower('H');
putchar(r + '0');
return (0);
}
