/*
 * File: 9-insert_nodeint.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * Description: Inserts a new node at a given position.
 * @head: Pointer to pointer of the first node in the linked list
 * @idx: Index of the list where the new node should be added.
 * @n: The new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *current = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
if (idx == 0)
{
new->next = current;
*head = new;
return (new);
}
for (i = 0; i < (idx - 1); i++)
{
if (current == NULL || current->next == NULL)
{
return (NULL);
}
current  = current->next;
}
new->next = current->next;
current->next = new;

return (new);
}
