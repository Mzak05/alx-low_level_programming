#include "lists.h"
/**
* print_list - info
* @h: info
* Return: Num
*/
size_t print_list(const list_t *h)
{
size_t c;
c = 0;
if (h == NULL)
{
return (0);
}
else
{
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
c += 1;
h = h->next;
}
}
return (c);
}
