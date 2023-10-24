#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to first node
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
