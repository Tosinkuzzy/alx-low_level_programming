/*
 * File: 8-sum_listint.c
 * Author: Tosinkuzzy
 */

#include "lists.h"

/**
 * sum_listint - Entry point
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
