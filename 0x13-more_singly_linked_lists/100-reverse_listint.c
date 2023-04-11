/*
 * File: 100-reverse_listint.c
 * @G: Tosinkuzzy
 */

#include "lists.h"

/**
 * reverse_listint - Entry point
 * Descript: Reverses a listint_t linked list.
 * @h: Pointer to pointer of first node in the linked list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *top = NULL;
listint_t *bottom;

if (!head || !*head)
{
return (NULL);
}
while (*head)
{
bottom = (*head)->next;
(*head)->next = top;
top = *head;
*head = bottom;
}
*head = top;
return (*head);
}
