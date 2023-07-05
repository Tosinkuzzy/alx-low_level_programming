/*
 * File: 10-delete_nodeint.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * Description: Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to pointer of first node in linked list
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *current;
unsigned int i;

if (!(*head))
return (-1);
if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
current = *head;
for (i = 0; i < (index - 1); i++)
{
if (!current->next)
return (-1);
current = current->next;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}
