/*
 * File: 3-add_nodeint_end.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * Description: Adds a new node at the end of a listint_t list.
 * @head: Pointer to pointer to the head node of the listint_t list
 * @n: New node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *current;

new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (!*head)
{
*head = new;
}
else
{
current = *head;
while (current->next)
{
current = current->next;
}
current->next = new;
}
return (new);
}
