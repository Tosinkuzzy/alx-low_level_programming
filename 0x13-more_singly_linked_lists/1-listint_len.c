/*
 * File: 1-listint_len.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * listint_len - Entry point
 * Description: Returns the number of elements in a linked listint_t list.
 * @h: Points to the head node of the list
 *
 * Return: Number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;

h = h->next;
}
return (count);
}
