#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;
listint_t *p;
h = malloc(sizeof(listint_t));
if (h == NULL)
{
return (NULL);
}
h->n = n;
h->next = NULL;
if (*head == NULL)
{
*head = h;
}
else
{
p = *head;
while (p->next != NULL)
{
p = p->next;
}
p->next = h;
}
return (h);
}
