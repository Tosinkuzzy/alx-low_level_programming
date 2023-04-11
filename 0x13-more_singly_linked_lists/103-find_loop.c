/*
 * File: 103-find_loop.c
 * @G: Tosinkuzzy
 */
#include "lists.h"

/**
 * find_listint_loop - Entry point
 * Descript: Find the loop in a linked list.
 * @h: Pointer to the head of the linked list
 *
 * Return: Address of node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *start = head;
listint_t *end = head;

if (head == NULL || head->next == NULL)
{
return (NULL);
}
while (end != NULL && end->next != NULL)
{
start = start->next;
end = end->next->next;
if (start == end)
{
start = head;
while (start != end)
{
start = start->next;
end = end->next;
}
return (start);
}
}
return (NULL);
}
