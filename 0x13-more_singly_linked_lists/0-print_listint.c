#include "lists.h"

/**
 * print_listint - print all the elements of the list
 * @h: pointer to firist node
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d", h -> n);
		h = h -> next;
		n++;
	}
	return (n);
}
