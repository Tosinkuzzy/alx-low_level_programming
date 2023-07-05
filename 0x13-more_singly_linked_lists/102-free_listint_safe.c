/*
 * File: 102-free_listint_safe.c
 * Author: Tosinkuzzy
 */
#include "lists.h"

/**
 * free_listint_safe - Entry point
 * Description: Frees a listint_t list.
 * @h: Pointer to pointer of first node in the linked list
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h, *node;
size_t count = 0;

if (!h || !*h)
{
return (count);
}
while (current)
{
node = current;
current = current->next;
if (current <= current->next)
{
*h = NULL;
count++;
break;
}
node = current->next;
current->next = NULL;
free(current);
current = node;
count++;
}
*h = NULL;
return (count);
}
