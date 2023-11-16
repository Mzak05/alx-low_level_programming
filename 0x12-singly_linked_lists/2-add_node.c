#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - infos
* @head: data
* @str: data
* Return: ths
*/
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *pp;
list_t *pr;
int c;
pr = (*head);
c = 0;
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
pp = malloc(sizeof(list_t));
pp->str = strdup(str);
if ((*head) == NULL)
{
pp->next = NULL;
}
else
{
pp->next = pr;
}
return (pp);
}
