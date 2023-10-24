#include "list.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to first node
 * @n: intiger of the node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;
	if (!new_node)
		return (NULL);
	if (!*head)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
