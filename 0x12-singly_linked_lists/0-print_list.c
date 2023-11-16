#include <stdio.h>
#include "lists.h"
/**
* print_list - data
* @h: datas
* Return: return
*/
size_t print_list(const list_t *h)
{
size_t c = 0;
const list_t *pp = h;
while (pp)
{
if (!pp->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", pp->len, pp->str);
pp = pp->next;
c++;
}
return (c);
}
