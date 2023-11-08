#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - fct
* @argc: fct
* @argv: fct
* Return: return
*/
int main(int argc, char *argv[])
{
int (*info)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2] == NULL || get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
info = get_op_func(argv[2]);
printf("%d\n", info(atoi(argv[1]), atoi(argv[3])));
return (0);
}

