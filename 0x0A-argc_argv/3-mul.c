#include <stdio.h>
/**
 * main - print infos
 * @argc: data
 * @argv: data
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("%d\n", a * b);
return (0);
}
