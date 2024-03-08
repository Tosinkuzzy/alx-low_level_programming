#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: double pointer to the head of the dlistint_t list
 * @index: index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;

if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}

