#include <stdlib.h>
#include "lists.h"
/**
* free_list - info
* @head: infos
*/
void free_list(list_t *head)
{
list_t *pp;
list_t *pr;
pp = head;
while (pp != NULL)
{
pr = pp->next;
free(pp);
pp = pr;
head = pp;
}
}
