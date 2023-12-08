#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		print("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
