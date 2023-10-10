#include<stdio.h>
/**
* main - program that will print a string with puts
* Return: always returns 0 (succes)
*/
void print_alphabet_x10(void) {
char a;
int i;
i=0;
while (i < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
i++;
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
