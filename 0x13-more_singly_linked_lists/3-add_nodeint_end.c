#include "list.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to first node
 * @n: intiger of the node
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		for (current = *head; current->next != NULL; current = current->next)
			;
		current->next = new_node;
	}
	return (new_node);
}
