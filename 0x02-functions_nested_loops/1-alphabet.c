#include "main.h"
/**
* main - program that will print a string with puts
* Return: always returns 0 (succes)
*/
void print_alphabet(void) {
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
