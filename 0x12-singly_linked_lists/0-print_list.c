#include "lists.h"
/**
* print_list - info
* @h: info
* Return: Num
*/
size_t print_list(const list_t *h)
{
const list_t *pp;
size_t c;
c = 0;
pp = h;
if (pp == NULL)
{
return (0);
}
else
{
while (pp->next != NULL)
{
if (pp->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", pp->len, pp->str);
}
c += 1;
pp = pp->next;
}
printf("[%d] %s\n", pp->len, pp->str);
}
return (c);
}
