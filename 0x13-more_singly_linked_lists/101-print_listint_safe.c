/*
 * File: 101-print_listint_safe.c
 * @G: Tosinkuzzy
 */
#include "lists.h"

/**
 * print_listint_safe - Entry point
 * Descript: Prints a listint_t linked list.
 * @h: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *current, *vets;
size_t counter = 0;

if (!head || !head->next)
{
return (0);
}
current = head;
while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
counter++;
if (current > current->next)
{
current = current->next;
}
else
{
vets = current->next;
printf("-> [%p] %d\n", (void *)vets, vets->n);
break;
}
}
return (counter);
}
