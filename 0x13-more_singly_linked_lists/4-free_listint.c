/*
 * File: 4-free_listint.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Frees a listint_t list.
 * @head: Pointer to head node in the linked list
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head)
{
current = head;
head = head->next;
free(current);
}
}
