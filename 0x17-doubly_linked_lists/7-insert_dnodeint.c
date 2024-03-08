#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the dlistint_t list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: integer value for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

current = *h;
for (i = 0; current != NULL && i < idx; i++)
current = current->next;

if (current == NULL && i == idx)
return (add_dnodeint_end(h, n));
else if (current != NULL)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = current->prev;
new_node->next = current;
current->prev->next = new_node;
current->prev = new_node;
return (new_node);
}

return (NULL);
}

