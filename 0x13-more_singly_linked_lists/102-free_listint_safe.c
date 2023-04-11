/*
 * File: 102-free_listint_safe.c
 * @G: Tosinkuzzy
 */
#include "lists.h"

/**
 * free_listint_safe - Entry point
 * Descript: Frees a listint_t list.
 * @h: Pointer to pointer of first node in the linked list
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h, *node;
size_t counter = 0;

if (!h || !*h)
{
return (counter);
}
while (current)
{
node = current;
current = current->next;
if (current <= current->next)
{
*h = NULL;
counter++;
break;
}
node = current->next;
current->next = NULL;
free(current);
current = node;
counter++;
}
*h = NULL;
return (counter);
}
