#include "lists.h"

/**
 * print_listint - Entry point
 * Description: Prints all the elements of a listint_t list.
 * @h: Pointer to the first node in the list
 *
 * Return: Numner of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
